#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - error handler
 * @code: error code
 * @message: message to print
 * Return: error code
 */
void print_error_and_exit(int code, const char *message, ...)
{
	va_list args;

	va_start(args, message);
	dprintf(STDERR_FILENO, message, args);
	va_end(args);
	exit(code);
}
/**
 * open_file - open a file and handle error
 * @file_path: self descriptive
 * @flags: flags of open function
 * @mode: mode to open
 * Return: file number
 */
int open_file(const char *file_path, int flags, mode_t mode)
{
	int fd = open(file_path, flags, mode);

	if (fd == -1)
		print_error_and_exit(99, "Error: Can't open file %s\n", file_path);
	return (fd);
}
/**
 * close_file - close file and handle error
 * @fd: number of the file
 * @file_path: self descriptive
 */
void close_file(int fd, const char *file_path)
{
	if (close(fd) == -1)
		print_error_and_exit(100, "Error: Can't close fd for file %s\n", file_path);
}
/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Return: 0 if success, else error code
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open_file(file_from, O_RDONLY, 0);
	fd_to = open_file(file_to,
			O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close_file(fd_from, file_from);
			close_file(fd_to, file_to);
			print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
		}
	}
	if (bytes_read == -1)
	{
		close_file(fd_from, file_from);
		close_file(fd_to, file_to);
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}
	close_file(fd_from, file_from);
	close_file(fd_to, file_to);
	return (0);
}
