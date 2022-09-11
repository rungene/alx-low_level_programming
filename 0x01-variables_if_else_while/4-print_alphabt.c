#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: function returns zero on success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
	putchar(ch);
	}
	}
	putchar('\n');

	return (0);
}
