#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *duple;
	int n, len = 0;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		len++;

	duple = malloc(sizeof(char) * (len + 1));

	if (duple == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		duple[n] = str[n];

	duple[len] = '\0';

	return (duple);
}
