#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: a string literal
 * @s2: second string literal to concatenate
 * Return: a pointer to the memory allocated for the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *n;
	int size1 = 0;
	int size2 = 0;
	int i = 0;
	int j = 0;
		if (s1 == NULL)
		{
			s1 = "\0";
		}
		else if (s2 == NULL)
		{
			s2 = "\0";
		}
	size1 = strlen(s1);
	size2 = strlen(s2);
	n = (char *)malloc(sizeof(char) * (size1 + size2) + 1);
		if (n == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size1; i++)
			{
				n[i] = s1[i];
			}
			for (j = 0; j < size2; j++)
			{
				n[i + j] = s2[j];
			}
			n[j + i] = '\0';
		}
	return (n);
}


