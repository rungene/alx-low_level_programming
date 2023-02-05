#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h - head pointer to the doubly linked lis
*
* Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes;
	const dlistint_t *temp;

	temp = h;
	num_nodes = 0;
	while(temp != NULL)
	{
		printf("%d\n", temp->n);
		num_nodes++;
		temp = temp->next;
	}
	return num_nodes;
}
