#include "function_pointers.h"
/**
 *array_iterator - executes a function on each element of an array
 *@array: the array of integers
 *@size: the size of the array
 *@action: a pointer to the function to be executed on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/*Check if the array and action function are not NULL*/
	if (array != NULL && action != NULL)
	{
		/*Iterate through the array and apply the action function to each element*/
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
