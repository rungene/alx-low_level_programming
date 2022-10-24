#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
* print_all - function that prints anything.
* @format: list of types of arguments passed to the function
*
*Return: Returns void
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	char *str;
	int i = 0;

	va_start(ap, format);

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
			{
			/**
			* A 'char' variable will be promoted to 'int'
			* A character literal in c is already 'int' by
			* itself
			*/
				char ch = (char)va_arg(ap, int);

				printf("%c", ch);
				break;
			}
			case 'i':
			{
				int j = va_arg(ap, int);

				printf("%d", j);
				break;
			}
			case 'f':
			{
				float f = (float)va_arg(ap, double);

				printf("%f", f);
				break;
			}
			case 's':
			{
				str = va_arg(ap, char*);
					if (str != NULL)
					{
						printf("%s", str);
						break;
					}
					printf("(nil)");
					break;
			}
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 's' ||
				format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
