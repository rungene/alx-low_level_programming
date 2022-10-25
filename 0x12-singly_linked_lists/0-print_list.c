#include "lists.h"
#include <stdio.h>
/**
* print_list - a function that prints all the elements of a list_t list.
* @h: pointer to the head of the list
*
* Return: the number of nodes in list as size_t
*/
size_t print_list(const list_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		printf("[%u] ", h->len);

		if (h->str == 0)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		node++;
	}
	return (node);
}
