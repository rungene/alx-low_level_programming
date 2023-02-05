#include "lists.h"
#include <stdio.h>

/**
* dlistint_len - returns the number of elements in a linked
* @h: head pointer to the doubly linked lis
*
* Return: the number of elements in a doubly inked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes;
	const dlistint_t *temp;

	temp = h;
	num_nodes = 0;
	while (temp != NULL)
	{
		num_nodes++;
		temp = temp->next;
	}
	return (num_nodes);
}
