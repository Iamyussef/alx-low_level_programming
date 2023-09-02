#include <stdio.h>

/**
 * main - prints the arguments it recieves
 * @argc: number of arguments passed
 * @argv: an array of pointers to arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;
		while (argc--)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	return (0);
}
