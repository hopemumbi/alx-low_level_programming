#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head:Pointer to a pointer to the head of the list
 * @str:String to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;/*Declare a pointer to a new list node*/

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

	/*next = points to the current head of the list*/
	new->next = *head;

	/*Update the head pointer to point to the new node, making it the new head*/
	*head = new;

	/*Return the address of the new node*/
	return (new);
}
