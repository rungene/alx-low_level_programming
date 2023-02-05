#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double pointer to the head.
* @n: data(int) to add
*
* Return: pointer to dlistint_t node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	/*Malloc failed*/
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	/*Empty list*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	/*temp represents the last node*/
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
