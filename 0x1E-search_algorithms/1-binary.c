#include "search_algos.h"
#include <stdio.h>

/**
* binary_search - searches for a value in
* a sorted array of integers using the Binary search algorithm
* @array:pointer to the first element of the array to search in
* @size:is the number of elements in array
* @value:the value to search for
*
* Return:first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	left = 0;
	right = size - 1;
	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = left + (right - left) / 2;

		if (array[mid]  == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
