#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *dog_t - struct
 *@d: pointer
 */
void free_dog(dog_t *d)
{
	free (d);
}
