#include "main.h"
/**
* _calloc -  allocates memory for an array, using malloc
* @nmemb: an array
* @size: size in bytes of each elements
*
* Return:  pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int i;
	int lenarr;

	lenarr = sizeof(nmemb) / size;
	if (nmemb == 0 || size == 0)
		ptr = NULL;
	ptr = (int *)malloc(sizeof(nmemb) * size);
	if (ptr == NULL)
		ptr = NULL;
	for (i = 0; i < lenarr; i++)
		ptr[i] = 0;
	return ((void *)ptr);
}
