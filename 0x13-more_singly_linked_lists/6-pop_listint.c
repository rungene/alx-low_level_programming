#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - deletes the head node of a listint_t linked list
*
* @head:first params, double pointer
*
* Return: he head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}
