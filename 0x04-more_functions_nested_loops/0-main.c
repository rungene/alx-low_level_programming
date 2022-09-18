#include "main.h"
#include <stdio.h>

/*
 *main - main entry of the program
 *
 * Return: returns zero on sucess
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c : %d\n", c, _isupper(c));
	c = 'a';
	printf("%c : %d\n", c, _isupper(c));
	return (0);

}
