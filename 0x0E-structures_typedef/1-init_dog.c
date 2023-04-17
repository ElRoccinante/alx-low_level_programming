#include <stdlib.h>
#include "dog.h"

/**

init_dog - initializes a variable of type struct dog
@d: pointer to struct dog to initialize
@name: name to initialize
@age: age to initialize
@owner: owner to initialize
Description: This function initializes the fields of a struct dog with the
provided values for name, age, and owner. It takes a pointer to struct dog
as the first argument and updates its fields accordingly.
If the provided pointer is NULL, it allocates memory for a new struct dog
and updates the pointer to point to the newly allocated memory.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog)); // Allocate memory for a new struct dog if d is NULL
d->name = name; // Initialize name field with provided name
d->age = age; // Initialize age field with provided age
d->owner = owner; // Initialize owner field with provided owner
}
