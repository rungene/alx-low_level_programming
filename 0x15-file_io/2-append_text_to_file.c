#include "main.h"
#include <stdlib.h>
/**
* append_text_to_file - append_text_to_file
* @filename:  the name of the file
* @text_content: NULL terminated string to write to the file
*
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	while (*(text_content + len))
		len++;

	if (text_content != NULL)
		bytes = write(fd, text_content, len);
	if (bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
