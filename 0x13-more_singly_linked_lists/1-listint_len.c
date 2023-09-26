#include "lists.h"

/**
 * listint_len - calculates the number of elements in a linked listint_t list.
 * @h: linked listint_t list
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;
	const listint_t *ptr = h;
		while (ptr != NULL)
		{
			len++;
			ptr = ptr->next;
		}
	return (len);
}
