#include "main.h"
/**
 * _islower - checks whether or not a character is lowercase
 * @c: integer representing ascii value of character
 * Return: 1 if it is lowercase or 0 otherwise
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (c == i)
	{
	lower = 1;
	}
	}
	return (lower);
}
