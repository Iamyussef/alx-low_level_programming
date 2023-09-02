#include <stdio.h>

/**
 * main - prints the first argument passed by command line
 * @argc: number of arguments
 * @argv: array of pointers to arguments passed by command line
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
}
