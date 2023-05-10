#include "search_algos.h"
#include <stdio.h>

/**
* linear_search - searches for a value in
* an array of integers using the Linear search algorithm
* @array:pointer to the first element of the array to search in
* @size:is the number of elements in array
* @value:the value to search for
*
* Return:first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if array is NULL */
	if (array == NULL)
	{
		return (-1);
	}
	/* Search for value in an array*/
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i]  == value)
		{
			/* Return the index of the value if found*/
			return (i);
		}
	}
	/* If value is not present in array return -1*/
	return (-1);
}
