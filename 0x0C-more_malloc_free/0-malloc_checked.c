#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - creates an array of integers.
 * @b: input.
 * Return: Output.
 */
void *malloc_checked(unsigned int b)
{
	void *size = malloc(b);

	if (size == NULL)
	{
		exit(98);
	}
	return (size);
}
