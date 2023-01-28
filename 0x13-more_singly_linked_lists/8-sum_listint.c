#include "lists.h"

/**
* sum_listint -  returns the sum of all the data (n) of a
* listint_t linked list.
* @head: first params, pointer to the head of linked list
*
* Return: the sum of all the data (n)
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
