#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	 int size1, size2, size3;
	 char *m;

		if (s1 == NULL)
			s1 = "\0";
		if (s2 == NULL)
			s2 = "\0";

	 size1 = strlen(s1);
	 size2 = strlen(s2);
	 size3 = size1 + size2 + 1;
	 m = (char *)malloc((size1 + size2) * sizeof(char) + 1);
		if (m == NULL)
		{
			return (0);
		}
		else
		{
			strcpy(m, s1);
			strcat(m, s2);
		}
		m[size3] = '\0';
		return (0);
}
