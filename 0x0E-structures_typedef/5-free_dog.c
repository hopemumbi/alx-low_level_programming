#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - frees memory allocated to the dog structure
 *
 *@d: pointer to the dog structure to be freed
 */
void free_dog(dog_t *d)
{
	/*check if the pointer is not NULL*/
	if (d != NULL)
	{
		/* free the allocated memory for name and owner strings*/
		free(d->name);
		free(d->owner);

		/*free the allocated memory for the dog structure itself*/
		free(d);
	}
}
