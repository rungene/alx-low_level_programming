#include "main.h"
#include <string.h>
/**
* string_nconcat -  a function that concatenates two strings.
* @s1: first parameter, string 1
* @s2: second parameter, string 2
* @n:third parameter, n
*
* Return: Character pointer to the new allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int lens1 = 0, lens2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[lens1] != '\0')
		lens1++;
	if (s2 == NULL)
		s2 = "";
	while (s2[lens2] != '\0')
		lens2++;

	if (n >= lens2)
		n = lens2;
	s3 = (char *)malloc(lens1 + n + 1);
	if (s3 == NULL)
		return (NULL);
	for (; i < (lens1 + n); i++)
	{
		if (i < lens1)
		{
			s3[i] = *s1;
			s1++;
		}
		else
		{
			s3[i] = *s2;
			s2++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
