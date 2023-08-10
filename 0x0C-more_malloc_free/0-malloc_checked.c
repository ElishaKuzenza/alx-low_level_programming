#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory size to be allocated
 *
 * Return: pointer to the address of the memory size
 */
void *malloc_checked(unsigned int b)
{
	void *size;

	size = malloc(b);
	if (size == NULL)
		exit(98);
	return (size);
