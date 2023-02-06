#include "lists.h"

/**
* sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
* @head: pointer to the head
*
* Return:  the sum of all the data (n) of a dlistint_t linked list.,
* if the list is empty, return 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)/*empty list*/
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
