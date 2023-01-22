#include "main.h"
/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: is the size, in bytes, of the allocated space for ptr
* @new_size: the new size, in bytes of the new memory block
*
* Return: Pointer to the reallocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p, *new_loc;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_loc = malloc(new_size);
	p = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		*(new_loc+i) = p[i];
	free(ptr);
	return (new_loc);
}
