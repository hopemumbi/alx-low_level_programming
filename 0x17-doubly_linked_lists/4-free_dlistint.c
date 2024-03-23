#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_dlistint(dlistint_t *head)
{
	/* Check if the current node is not NULL */
	if (head)
	{
		/* Recursively call free_dlistint on the next node */
		free_dlistint(head->next);
		/* Free the memory allocated for the current node */
		free(head);
	}
}
