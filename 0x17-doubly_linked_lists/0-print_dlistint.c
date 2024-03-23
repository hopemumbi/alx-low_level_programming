#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: a pointer to a structure(node)
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	/*intialize a variable to zero to keep count of the loops*/
	int count = 0;
	/*transverse through the nodes */
	while (h != NULL)
	{
		/*print the data*/
		printf("%d\n", h->n);
		/*point to the next node*/
		h = h->next;
		/*add one at the end of every loop ; new node*/
		count = count + 1;
	}
	/*Return: the number of nodes*/
	return (count);
}
