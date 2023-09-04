#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments passed by command line
 * @argv: an array of pointer to strings
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int amount;
	int coins[5] = {25, 10, 5, 2, 1};
		if (argc == 1)
		{
			printf("Error\n");
			return (1);
		}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			for (int a = 0; coins[i] <=  amount; a++)
			{
				amount -= coins[i];
				sum++;

			}
			if (amount == 0)
			{
				break;
			}
		}
		 printf("%d\n", sum);
	}
	return (0);
}

