#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * create_file - function that create a file
 * @filename: file to create
 * @text_content: is a null terminated string to write the file
 * Return: 1 success, 0 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd, file_w;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = creat(filename, 0600);
		return (1);
	}
	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	file_w = write(fd, text_content, strlen(text_content));
	if (file_w == -1)
		return (-1);
	close(fd);
	return (1);
}
