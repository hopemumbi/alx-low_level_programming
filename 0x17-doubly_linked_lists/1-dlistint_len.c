#include <stddef.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 *
 * @h: pointer to alinked list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	/*initialize a variable to track the loops*/
	int count = 0;

	/*transverse through the nodes*/
	while (h != NULL)
	{
		/*point to the next node*/
		h = h->next;
		/*add one to the counter*/
		count = count + 1;
	}
	/*return the number of loops counted*/
	return (count);
}
