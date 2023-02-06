#include "lists.h"

/**
* get_dnodeint_at_index - gets the nth node of a dlistint_t linked list.
* @head: pointer to the head of double linked list
* @index: is the index of the node, starting from 0
*
* Return: returns the nth node of a dlistint_t linked list or NUll if
* it dose not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	temp = head;
	if (head == NULL)
		return (NULL);
	if (index == 0)
	/*first node*/
		return (head);
	while (index > 0)
	{
		temp = temp->next;
		index--;
	} /*temp represents the nth node*/
	return (temp);
}
