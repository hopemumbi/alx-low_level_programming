#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 *
 * @head: a pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/*intialize a variable to zero to keep count of the loops*/
	unsigned int count = 0;
	/*transverse through the nodes */
	while (head != NULL)
	{
		/* check if the current note index matches the desired index */
		if (count == index)
		{
			/* if true return the current node*/
			return (head);
		}
		/* move  to the next node */
		head = head->next;
		/* increment the node*/
		count = count + 1;
	}
	/* return null if index is out of bounds*/
	return (NULL);
}
