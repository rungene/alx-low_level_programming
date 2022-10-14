#include <stdlib.h>

/**
* array_iterator - function that executes a function given as
* a parameter on each element of an array.
* @array: pointer array to print
* @size: the size of the array
* @action: pointer to the function to iterate  through array
*
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	for (; i < size; i++)
		action(array[i]);
}
