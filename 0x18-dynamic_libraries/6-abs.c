#include "main.h"

/**
 *_abs - accepts an int, returns absolute value
 * @r: An integet input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
