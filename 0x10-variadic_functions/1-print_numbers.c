#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - a function that prints numbers, followed by a new line.
* @separator:  the string to be printed between numbers
* @n: the number of integers passed to the function
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	int digit;

	va_start(ap, n);
	for (; i < n; i++)
	{
		digit = va_arg(ap, int);
		printf("%d\n", digit);

		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
