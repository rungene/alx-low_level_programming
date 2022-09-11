#include <stdio.h>
/**
 * main -entry point of the program
 *
 * Return: returns zero on success
 */
int main(void)
{
	int base10;

	for (base10 = 0; base10 <= 9; base10++)
	{
	printf("%d", base10);
	}
	putchar('\n');

	return (0);
}
