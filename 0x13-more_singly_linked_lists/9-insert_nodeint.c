#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - inserts a new node at a given position.
* @head: first params, double pointer to the head
* @idx: second params,  is the index of the list where the new node
* should be added. Index starts at 0
* @n: third params, data to add
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	unsigned int i;
	listint_t *temp2;

	temp2 = *head;
	/*empty list*/
	if (*head == NULL)
		return (NULL);

	/*create the new node to add*/
	temp = (listint_t *)malloc(sizeof(listint_t));
	/*if malloc returned NULL*/
	if (temp == NULL)
		return (NULL);
	/*initialize the node*/
	temp->n = n;
	temp->next = NULL;
	if (idx > 0)
	{
		/*traverse the linked list up to idx - 1*/
		for (i = 0; i < idx - 1; i++)
			temp2 = temp2->next;
			/*temp2 represents idx - 1 node*/
	}
	else if (idx == 0)
	{
		temp->next = (*head)->next;
		*head = temp;
	}
	/*negative index*/
	else
		return (NULL);
	/*fixing link at idx position*/
	temp->next = temp2->next;
	/*fixing the link between idx - 1 and new created node */
	temp2->next = temp;
	return (temp);
}
