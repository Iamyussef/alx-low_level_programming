#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments passed
 * @argv: an array of pointers to the arguments
 * Return:(0) success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int a = 0;

		if (argc == 1)
		{
			printf("0\n");
		}
		if (argc > 2)
		{
			for (i = 1; i < argc; i++)
			{
				for (a = 0; argv[i][a] != '\0'; a++)
				{
					if (argv[i][a] > '9' || argv[i][a] < '0')
					{
						printf("Error\n");
						return (1);
					}
				}
				sum += atoi(argv[i]);
			}
			printf("%d\n", sum);
		}
	return (0);
}
