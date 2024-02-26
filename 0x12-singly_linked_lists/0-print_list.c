#include <stdio.h>
#include "lists.h"
/**
 *print_list - Prints all the elements of a linked list
 *@h: Pointer to the head of the list
 *
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", h->len);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
