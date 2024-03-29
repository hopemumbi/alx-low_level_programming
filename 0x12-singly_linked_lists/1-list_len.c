#include <stdio.h>
#include "lists.h"
/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the list
 *
 * Return:the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
