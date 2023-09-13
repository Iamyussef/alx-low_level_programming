#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - prints a dog
 * @d: the dog to print
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("%s\n", d->name);
	}
	printf("%f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
		printf("%s\n", d->owner);
}
