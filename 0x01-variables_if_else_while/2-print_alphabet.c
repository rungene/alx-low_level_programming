#include <stdio.h>
/**
 * main - This is the entry point of this program
 *
 * Return: The function returns zero on success.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
