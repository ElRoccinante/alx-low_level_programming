#include <stdio.h>
#include "dog.h"

/**
 * custom_print_dog - custom print function for struct dog
 * @d: pointer to struct type dog
 * Return: Nothing, because it's void
 */
void custom_print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Dog's Name: Unknown\n");
		else
			printf("Dog's Name: %s\n", d->name);

		printf("Dog's Age: %.1f years\n", d->age);

		if (d->owner == NULL)
			printf("Dog's Owner: Unknown\n");
		else
			printf("Dog's Owner: %s\n", d->owner);
	}
}
