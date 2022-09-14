#include "main.h"
/**
 *_isalpha - function returns 1 if the character is a
*letter, lowercase or uppercase.
* @c: An input character
*Return: 1 or 0 in otherwise.
*/
int _isalpha(int c)
{
	char lower, upper;
	int isaletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
	if (c == lower || c == upper)
		isaletter = 1;
	}
	}
	return (isaletter);
}
