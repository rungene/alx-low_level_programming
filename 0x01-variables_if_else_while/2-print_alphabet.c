#include <stdio.h>
#include <ctype.h>
/**
 * main - main entry of the program
 *
 * Return: retuns zero on success
 */
int main(void)
{
	char ch;
       	for(ch = 'A' ; ch<= 'Z'; ch++)
       	{
	 putchar(ch);
	 putchar(tolower(ch));
	 putchar('\n');							
	}
	return (0);
}

