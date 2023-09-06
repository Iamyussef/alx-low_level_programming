#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments passed
 * @av: arguments
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int size = 0;
	char *str;
		if (ac == 0 || av == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < ac; i++)
		{
			size += strlen(av[i]) + 1;
		}
	str = malloc(sizeof(char) * size + 1);
		if (str == NULL)
		{
			return (NULL);
		}
	size = 0;
			for (i = 0; i < ac; i++)
			{
				size += strlen(av[i]);
				strcat(str, av[i]);
				str[size] = '\n';
				size++;
			}
			str[size] = '\0';
			return (str);
}
