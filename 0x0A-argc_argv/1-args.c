#include <stdio.h>

/**
 * main - prints the number of arguments passed by command line
 * @argc: number of arguments
 * @argv: an array pf pointers to the arguments passed
 * Return: 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 1;
		for (i; i < argc; i++)
		{
		}

	printf("%d\n", i - 1);
	return (0);
}
