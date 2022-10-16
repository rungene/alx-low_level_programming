#include <stdarg.h>

/**
* sum_them_all - variadic function to add all its parameters.
* @n: fixed no of arguments
*
* Return: returns the sum of all its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
