#include <stdio.h>
/**
 * main - entry point for the program
 *
 * Return: Returns zero on sucess
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
