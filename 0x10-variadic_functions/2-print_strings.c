#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - a function that prints strings, followed by a new line.
* @separator: is the string to be printed between the strings
* @n: is the number of strings passed to the function
* @...: Other parameters
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *ch;

	va_start(ap, n);
	for (; i < n; i++)
	{
		ch = va_arg(ap, char*);
		if (ch == NULL)
			printf("(nil)");
		else
			printf("%s", ch);

		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
