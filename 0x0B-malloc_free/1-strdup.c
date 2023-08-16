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
	int i = 0;
	int  size = 0;

	for (size = 0; str[size] != '\0'; size++)
	;
	char *n = malloc(size * sizeof(*str) + 1);
		if (n == NULL)
		{
			return (0);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				n[i] = str[i];
			}
		}
		return (n);
}



