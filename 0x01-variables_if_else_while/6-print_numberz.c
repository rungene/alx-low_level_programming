#include <stdio.h>
/**
 * main - Entry of the program
 *
 * Return: retruns zero on success
 */
int main(void)
{
	int base10;

	for (base10 = 0 + '0'; base10 <= 9 + '0'; base10++)
	{
	putchar(base10);
	}
	putchar('\n');
	return (0);
}
