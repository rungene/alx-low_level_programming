#include "lists.h"
/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list
* @head:first params, pointer to the head
* @index: second params,the index of the node, starting at 0
*
* Return: nth node of a listint_t linked list.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	if (!head)
		return (NULL);
	return (head);
}
