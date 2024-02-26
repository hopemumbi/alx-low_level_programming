#include "lists.h"
#include "stdlib.h"
/**
 *free_list - that frees a list_t list.
 *@head: pointer to linked list
 *
 *Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
