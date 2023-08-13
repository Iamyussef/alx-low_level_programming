#include <stdio.h>
#include <stdlib.h>

/**
 *main-print sum of 2 numbers.
 *@argc:number of commandline arguments.
 *@argv:pointer to an array of commmand line arguments.
 *Return:0-success, non-zero-fail.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int sum;
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
			sum = num1 * num2;
			printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
