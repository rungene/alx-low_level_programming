#include "lists.h"

/**
* listint_len - a function that returns the number of elements in a linked
* @h: pointer to the struct.
*
* Return: number of elements in a linked listint_t list.
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
