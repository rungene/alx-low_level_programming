#include "main.h"
/**
*print_most_numbers - print numbers from 0-9
*
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0 + '0'; i <= 9 + '0'; i++)
	{
		if (i == 2 + '0' || i == 4 + '0')
			continue;
	_putchar(i);
	}
	_putchar('\n');
}
