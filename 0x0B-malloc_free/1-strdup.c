#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *  _strdup - allocates memory for a duplicated string
 *@str: a string to duplicate
 *Return: a pointer to the allocated memory.
 */

char *_strdup(char *str)
{
	char *n;
	int size;
		if (str == NULL)
		{
			return (NULL);
		}
	size = strlen(str);
	n = malloc(sizeof(char) * size + 1);
		if (n == NULL)
		{
			return (NULL);
		}
		else
		{
			n = strcpy(n, str);
		}
	return (n);
}
