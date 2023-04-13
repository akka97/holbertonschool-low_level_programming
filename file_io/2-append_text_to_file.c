#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file to create
 * @text_content: is a null terminated string to write the file
 * Return: 1 success, 0 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_f, len, i;

	if (filename == NULL)
		return (-1);

	len = 0;
	if (text_content != NULL)
		for (i = 0; text_content[len] != '\0'; i++)
			len++;

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	write_f = write(file, text_content, len);
	if (write_f == -1)
		return (-1);

	close(file);

	return (1);
}
