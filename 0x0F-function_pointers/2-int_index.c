#include "function_pointers.h"
/**
 *int_index - searches for an integer in an array using a comparison function
 * @array: the array to search
 *@size: the number of elements in the array
 *@cmp: a pointer to the comparison function
 *Return: the index of the first element for which cmp does not return 0,
 * ........-1 if no element matches or if size is less than or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/*Check if size is less than or equal to 0*/
	if (size <= 0)
		return (-1);

	/*Check if array and cmp are not NULL*/
	if (array != NULL && cmp != NULL)
	{
		/*Call the comparison function on the current array element*/
		for (i = 0; i < size; i++)
		{
			int re_turn = cmp(array[i]);
			/*Check if the result is not 0 (indicating a match)*/
			if (re_turn != 0)
				return (i);
		}
	}
		/*If no element matches, return -1*/
		return (-1);
}
