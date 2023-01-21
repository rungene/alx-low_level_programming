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
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		ptr = NULL;
	ptr = (char *)malloc(nmemb * size);
	if (ptr == NULL)
		ptr = NULL;
	for (i = 0; i < size; i++)
		ptr[i] = 0;
	return (ptr);
}
