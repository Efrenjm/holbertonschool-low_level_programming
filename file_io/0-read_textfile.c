#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - print a file to stdout and print the number of characters
 * @filename: name of the file
 * @letters: the number of letters it is supposed to read
 * Return: the actual number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t read_bytes, write_bytes;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	read_bytes = read(file_descriptor, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	free(buffer);
	close(file_descriptor);

	if (write_bytes != read_bytes)
		return (0);

	return (read_bytes);
}

