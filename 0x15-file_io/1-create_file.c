#include "main.h"
#include <stdlib.h>
/**
* create_file - creates a file.
* @filename: the name of the file to create
* @text_content: NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content && *(text_content + len))
		len++;
	bytes = write(fd, text_content, len);
	if (bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
