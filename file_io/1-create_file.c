#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - Create a file with content
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if created, -1 if error
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t write_result;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_result = write(file_descriptor, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
