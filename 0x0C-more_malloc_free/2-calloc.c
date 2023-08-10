#include "main.h"
#include <stdlib.h>
/**
* _calloc - prints calloc;
* @nmemb: input string.
* @size: input string.
* Return: Pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *k;
	unsigned int i, f;

	f = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	k = malloc(f);
	if (k == NULL)
		return (NULL);

	for (i = 0; i < (f); i++)
	{
		k[i] = 0;
	}
	return (k);
}
