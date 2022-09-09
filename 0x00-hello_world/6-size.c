#include<stdio.h>
/**
 * main - This is a main function
 *
 * Return: the function returns zero if no erro while non zero error
 */
int main()
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongType;
	float floatType;

	 printf("Size of char: %zu byte(s)\n", sizeof(charType));
	 printf("Size of int: %zu byte(s)\n", sizeof(intType));
	 printf("Size of long int: %zu byte(s)\n", sizeof(longIntType));
	 printf("Size of long long int: %zu byte(s)\n", sizeof(longLongTypes));
	 printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	 return(0);
}

