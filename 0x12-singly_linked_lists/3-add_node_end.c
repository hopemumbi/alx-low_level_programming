#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head:Pointer to a pointer to the head of the list
 * @str:String to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *l_list = *head;

	/**
	 * Allocate memory for the new node
	 *  Check if memory allocation was successful
	 *  Return NULL if memory allocation failed
	 */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	/*str = Duplicate the input string*/
	new->str = strdup(str);

	/*len = length of the input string*/
	new->len = strlen(str);

	/*next = NULL as it will be the last node*/
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/*point it to old first node*/
	while (l_list->next != NULL)
	{
		l_list = l_list->next;
	}

	/*point first to new first node*/
	l_list->next = new;

	/*Return the address of the new node*/
	return (new);
}
