#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr -- description
 * @ac: integer
 * @av: arguments
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, h = 0, j = 0, ab = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, h++)
		h += strlen(av[i]);

	s = malloc(sizeof(char) * h + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, ab++)
			s[ab] = av[i][j];

		s[ab] = '\n';
		ab++;
	}
	s[ab] = '\0';
	return (s);
}
