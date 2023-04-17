#include "dog.h"

/**
 * init_dog - Initialize a dog struct
 *
 * @d: Pointer to a struct dog
 * @name: Input for the dog's name
 * @age: Input for the dog's age
 * @owner: Input for the dog's owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/* Commented out the original assignment to dog's name */
		/* d->name = name; */

		/* Assign the dog's name */
		(*d).name = name;

		/* Assign the dog's age */
		(*d).age = age;

		/* Assign the dog's owner */
		(*d).owner = owner;
	}
}
