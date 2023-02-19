#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: double pointer to the head list
* @idx: is the index of the list where the new node should be added.
* Index starts at 0
* @n: The data to add to the new node
*
* Return: the address of the new node, or NULL if it failed
* if it is not possible to add the new node at index idx,
* do not add the new node and return NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	dlistint_t *temp2;
	unsigned int i;

	temp = *h;
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (h == NULL)
		return (NULL);
	/*Empty list*/
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx ==  0)/*insert at head node*/
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	/*if the last node*/
	if (temp->next == NULL)
	{
		temp->next = new_node;
		new_node->prev = temp;
		return (new_node);
	}
	/*temp represents n node*/
	/*temp2 represents n+1 node*/
	temp2 = temp->next;
	temp->next = new_node;
	temp2->prev = new_node;
	new_node->next = temp2;
	new_node->prev = temp;
	return (new_node);
}
