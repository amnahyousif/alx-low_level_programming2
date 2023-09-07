#include "main.h"
/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: integer
 * Return: null, pointer.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int i;
	char *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
