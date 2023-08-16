#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	;

	n = (char *) malloc(size * sizeof(*str) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	else
	{

		for (i = 0; i < size; i++)
			n[i] = str[i];
	}
	return (n);
}
