#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - self descriptive
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 if success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t write_result;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
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
