#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
* jump_search - searches for a value in
* a sorted array of integers using the Jump search algorithm
* @array:pointer to the first element of the array to search in
* @size:is the number of elements in array
* @value:the value to search for
*
* Return:first index where value is located
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, m, x = 0;

	i = 0;
	m = sqrt(size);
	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	while (array[m] <= value && m < size)
	{
		/*printf("Value checked array[%lu] = [%d]\n", i, array[i]);*/
		i = m; /*block shift*/
		m += sqrt(size);
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		/*if m exceeds array size*/
		if (m > size - 1)
			return (-1);
	}
	/*Linear search the current block*/
	printf("Value found between indexes [%lu] and [%lu]\n", i, m);
	/*printf("Value found between indexes [%lu] and [%lu]\n", m, i);*/
	for (x = i; x < m; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);/*index of the position searched*/
	}
	return (-1);
}
