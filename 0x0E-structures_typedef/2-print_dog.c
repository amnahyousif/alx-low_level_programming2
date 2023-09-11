#include "dog.h"
/**
 * print_dog - function print struct dog.
 * @d: pointer.
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if ((*d).name == NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if ((*d).age <= 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if ((*d).owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
