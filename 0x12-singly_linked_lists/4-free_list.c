#include "lists.h"

/**
* free_list - a function that frees a list_t list
* @head: pointer to the head of the linked list
*
* Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
