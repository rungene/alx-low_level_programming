#include "lists.h"

/**
* list_len -  function that returns the number of elements in a linked
* @h: pointer to the struct list_t
*
* Return: number of elements in a linked
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
