#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

	if (ac != 3)
	{
		dprintf(2, "Usage: %s cp file_from file_to\n", av[0]);
		exit(97);
	}

	fdfrm = open("incitatous", O_RDONLY);
	if (fdfrm < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdto = open("Incitatous", O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdto < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99)
	}
	bytes = write();

}
