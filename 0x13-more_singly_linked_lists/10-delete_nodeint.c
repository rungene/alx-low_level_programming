#include <stdlib.h>
#include "lists.h"
/**
* delete_nodeint_at_index - deletes the node at index index of a
* listint_t linked list.
* @head: fisrts params, double pointer to the head
* @index: the index of the node that should be deleted.
* Index starts at 0
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1;
	listint_t *temp2;
	unsigned int i;

	temp1 = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp1->next;
		free(temp1);
		return (1);
	}
	for (i = 0; i < index - 1 ; i++)
		temp1 = temp1->next;
	temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
	return (1);
}
