#include "lists.h"
#include <stddef.h>

/**
 * list_len - calculates the number of elements in a linked list_t list.
 * @h; list_t
 * Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *ptr = h;

		while (ptr != NULL)
		{
			i++;
			ptr = ptr->next;
		}
	return (i);
}
