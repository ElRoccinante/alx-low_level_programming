#include <stdio.h>
#include "dog.h"

/**
 * display_dog - displays the contents of a struct dog
 * @d: pointer to struct dog
 * Return: void
 */
void display_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Dog's Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Dog's Age: %.1f\n", d->age);
	printf("Dog's Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
