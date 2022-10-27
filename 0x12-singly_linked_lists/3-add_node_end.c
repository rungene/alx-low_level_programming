#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: pointer to the head
* @str: pointer to the str
*
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;

	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	while (str[length])
		length++;

	newNode->str = strdup(str);
	newNode->len = length;
	newNode->next = NULL;

	if (*head == NULL)
	{
	/* empty list */
		*head = newNode;
	}
	else
	{
		list_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
	/* add the newNode to the end of linked list */
	lastNode->next = newNode;
	}
	return (newNode);
}
