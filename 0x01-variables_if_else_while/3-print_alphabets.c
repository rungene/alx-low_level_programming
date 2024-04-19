#include <stdio.h>
/**
 * main - main entry of the program
 *
 * Return: retuns zero on success
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
