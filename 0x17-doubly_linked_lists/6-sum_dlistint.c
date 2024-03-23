#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * sum_dlistint -  returns the sum of all the data (n) of a list.
 *
 * @head: a pointer to the head of the list
 *
 * Return: the sum of all the data in the list,
 * or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	/*intialize the sum to zero*/
	int sum = 0;

	/* check if list is empty */
	if (head)
	{
		/*transverse through the nodes */
		while (head != NULL)
		{
			/* add the data of the current node to the sum*/
			sum = sum + head->n;

			/* move  to the next node */
			head = head->next;
		}
		/* return the sum */
		return (sum);
	}
	/* if the list is empty*/
	return (0);
}
