#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - error handler
 * @code: error code
 * @message: message to print
 * ...: additional arguments for the message
 * Return: error code
 */
void print_error_and_exit(int code, const char *message, ...) {
    va_list args;

    va_start(args, message);
    dprintf(STDERR_FILENO, "Error: ");
    vdprintf(STDERR_FILENO, message, args);
    va_end(args);

    exit(code);
}

/**
 * copy_file - copy content from one file to another
 * @file_from: source file path
 * @file_to: destination file path
 */
void copy_file(const char *file_from, const char *file_to) {
    int fd_from, fd_to;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

    fd_from = open(file_from, O_RDONLY);

    if (fd_from == -1)
        print_error_and_exit(98, "Can't read from file %s\n", file_from);

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

    if (fd_to == -1)
        print_error_and_exit(99, "Can't write to file %s\n", file_to);

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);

        if (bytes_written == -1)
            print_error_and_exit(99, "Can't write to file %s\n", file_to);
    }

    if (bytes_read == -1)
        print_error_and_exit(98, "Can't read from file %s\n", file_from);

    if (close(fd_from) == -1)
        print_error_and_exit(100, "Can't close fd for file %s\n", file_from);

    if (close(fd_to) == -1)
        print_error_and_exit(100, "Can't close fd for file %s\n", file_to);
}

int main(int argc, char *argv[]) {
    const char *file_from, *file_to;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    file_from = argv[1];
    file_to = argv[2];

    copy_file(file_from, file_to);

    return 0;
}

