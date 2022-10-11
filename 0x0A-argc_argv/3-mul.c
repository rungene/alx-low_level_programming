#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - A program that multiplies two numbers
* @argc: argument count
* @argv: argument vector
*
* Return: 0 Always -Success or 1 on Error
*/
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mult = mult * atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
