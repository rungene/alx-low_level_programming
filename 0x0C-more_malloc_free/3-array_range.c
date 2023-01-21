#include "main.h"
/**
* array_range -  creates an array of integers.
* @min: int parameter
* @max: int parameter
*
* Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int i,numele;
	int *p;
	
	numele = 0;
	if (min > max)
		return (NULL);
	for (i=min; i<= max; i++)
		numele += 1;
	p = malloc(sizeof(int) * (numele));

	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		*(p+i) = min++;
	return (p);
}
