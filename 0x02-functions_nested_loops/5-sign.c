#include "main.h"
/**
 * print_sign - This function prints the sign of the number
 * @n: An input number
 * Return: 1 if number is positive, o if number is 0, or
 * 1 if number is negative
 */
int print_sign(int n)
{
	int number;

	if (n > 0)
	{
	number = 1;
	_putchar('+');
	}
	else if (n == 0)
	{
	number = 0;
	_putchar('0');
	}
	else
	{
	number = -1;
	_putchar('-');
	}
	return (number);
}
