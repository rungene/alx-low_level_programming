#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int close_fd(int descriptor);
/**
* main - check the code
* @ac: argument count
* @av: argument vector
*
* Return: Always 0.
*/
int main(int ac, char **av)
{
	int fdfrm, fdto;
	ssize_t bytes;
	char *buf = NULL;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s cp file_from file_to\n", av[0]);
		exit(97);
	}

	fdfrm = open(av[1], O_RDONLY);
	if (fdfrm < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				av[1]);
		close_fd(fdfrm);
		exit(98);
	}
	fdto = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdto < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close_fd(fdto);
		exit(99);
	}
	buf = malloc(1024 * (sizeof(char)));
	if (!buf)
		return (0);
	bytes = read(fdfrm, buf, 1024);
	if (bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, av[1]);
		free(buf);
		close_fd(fdfrm);
		close_fd(fdto);
		exit(98);
	}
	bytes = write(fdto, buf, bytes);
	if (bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n"
				, av[2]);
		free(buf);
		close_fd(fdfrm);
		close_fd(fdto);
		exit(99);
	}
	return (0);
}

/**
* close_fd - attempts to close file descriptors
* @descriptor: file descriptor
*
* Return: 0 on sucess or -1 on failure
*/
int close_fd(int descriptor)
{
	int result;

	result = close(descriptor);
	if (result < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				descriptor);
		exit(100);
	}
	return (result);
}
