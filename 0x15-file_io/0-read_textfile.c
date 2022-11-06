#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
* read_textfile -  reads a text file and prints it to
* the POSIX standard output.
* @filename: file to read
* @letters: number of letters it should read and print
*
* Return: actual number of letters it could read and print
* 0 if he file can not be opened or read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = NULL;
	int fd;
	ssize_t bytes;

	if (!filename || !letters)
		return (0);
	buf = malloc(letters + 1);
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (free(buf), 0);
	bytes = read(fd, buf, letters);
	if (bytes == -1)
		return (free(buf), 0);
	buf[letters] = '\0';
	bytes = write(STDOUT_FILENO, buf, bytes);
	if (bytes == -1)
		return (free(buf), 0);
	free(buf);
	close(fd);
	return (bytes);
}
