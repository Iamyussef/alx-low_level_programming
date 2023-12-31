#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string.
 * @s2: pointer to 2nd string.
 * @n: Number of bytes from n2 to concatenate.
 * Return: Pointer to space in memory containing concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_size = 0;
	char *m;
	unsigned int i = 0, j = 0;
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
		while (s1[s1_size] != '\0')
		{
			s1_size++;
		}
	m = malloc(sizeof(char) * (n + s1_size) + 1);
		if (m == NULL)
		{
			return (NULL);
		}
			for (j = 0; j < s1_size; j++)
			{
				m[j] = s1[j];
			}
	j = 0;

			for (i = s1_size; i < n + s1_size; i++)
			{
				m[i] = s2[j];
				j++;
			}
			m[i] = '\0';
		return (m);
}
