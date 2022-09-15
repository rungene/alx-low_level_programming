#include "main.h"
/**
 * print_last_digit - This function prints the last digit of a number
 * @r: An integer input
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
	int lastdigit;

	if (r < 0)
		lastdigit = -1 * (r % 10);
	else
		lastdigit = r % 10;
	_putchar((lastdigit % 10) + '0');
	return (lastdigit % 10);
}
