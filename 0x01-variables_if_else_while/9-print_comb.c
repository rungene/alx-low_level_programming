#include <stdio.h>
/**
 * main - Entry of the preogram
 *
 * Return: zero(0) on success
 */
int main(void)
{
	int ch;

	for (ch =  0 + '0'; ch <= 9 + '0'; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
