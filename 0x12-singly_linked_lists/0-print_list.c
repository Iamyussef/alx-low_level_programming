#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_list -  prints all the elements of a list_t list.
 * @h: list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t i = 0;
		while (current != NULL)
		{
			i++;
			if (current->str == NULL)
				printf("[0] (nil)\n");
			else
			{
				printf("[%u] ", current->len);
				printf("%s\n", current->str);
			}
			current = current->next;
		}
		return (i);
}
