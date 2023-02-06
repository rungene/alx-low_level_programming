#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - frees a dlistint_t list.
* @head: pointer to the head of the list
*
* Return: Void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = temp->next;
		head = temp;
		free(temp);
	}
}
