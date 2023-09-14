#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index -  searches for an integer
 * @array: the int array
 * @size: the array size
 * @cmp: the compare function
 * Return: the integer index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
		if (size <= 0)
		{
			return (-1);
		}
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if ((*cmp)(array[i]) != 0)
				{
					return (i);
				}
			}
		}
	return (-1);
}
