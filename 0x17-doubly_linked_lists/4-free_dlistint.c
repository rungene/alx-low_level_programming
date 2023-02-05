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
	while (head->next != NULL)
		free(head->prev);
	free(head);
}
