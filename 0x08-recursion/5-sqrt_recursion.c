#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @x: int
 * @y: square root
 * Return: int
 */
int square(int x, int y);

int _sqrt_recursion(int n)
{
	square(n, 1);
}
/**
 * square - find square root
 * @x: int to find square root
 * @y: int (square root)
 * Return: int
 */


int square(int x, int y)
{
	if (x == y * y)
	{
		return (y);
	}
	else if (x < y * y)
	{
		return (-1);
	}
	else
	{
		square(x, y + 1);
	}
}
