#include "main.h"
/**
 * main -entry of the program
 * Description: It prints the word _putchar, followed by a new line
 * Return: returs 0 on success
 */
int main(void)
{
	char name[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
		_putchar(name[x]);
	_putchar('\n');
	return (0);
}
