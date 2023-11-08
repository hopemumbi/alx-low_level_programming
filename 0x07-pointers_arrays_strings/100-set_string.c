#include "main.h"
/**
 *set_string -  sets the value of a pointer to a char.
 *@s:Pointer to a pointer to char to be set.
 *@to: Pointer to the new character array.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
