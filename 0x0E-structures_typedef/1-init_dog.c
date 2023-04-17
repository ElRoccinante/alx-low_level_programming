#include <stdlib.h>
#include "dog.h"

// initializes a variable of type struct dog
// @d: pointer to struct dog to initialize
// @name: name to initialize
// @age: age to initialize
// @owner: owner to initialize
// #include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
