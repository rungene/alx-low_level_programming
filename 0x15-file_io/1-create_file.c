#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* create_file - creates a file.
* @filename: the name of the file to create
* @text_content: NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	bytes = write(fd, text_content, strlen(text_content));
	if (bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
