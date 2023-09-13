#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator -  executes a function given
 *                   as a parameter on each element of an array
 * @array: the int array
 * @size: the array size
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
		if (array != NULL && size > 0 && action != NULL)
		{
			for (i = 0; i < size; i++)
			{
				(*action)(array[i]);
			}
		}
}
