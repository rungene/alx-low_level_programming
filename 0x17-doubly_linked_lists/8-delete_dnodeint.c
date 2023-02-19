#include <stdlib.h>
#include "lists.h"
/**
* delete_dnodeint_at_index - deletes the node at index index of
* a dlistint_t linked list.
* @head: double pointer to the head
* @index: is the index of the node that should be deleted.
* Index starts at 0
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *temp2;
	dlistint_t *temp3;

	temp = *head;
	if (!head || !(*head))
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	while (index != 0)
	{
		temp = temp->next;
		index--;

	}
	/*tem=n node, temp2=n+1 node, temp3=n-1 node*/
	temp2 = temp->next;
	temp3 = temp->prev;
	temp3->next = temp2;
	temp2->prev = temp3;
	free(temp);
	return (1);
}
