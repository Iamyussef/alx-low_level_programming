#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	list_t *current = h;
	unsigned int i = 0;

		while (current != NULL)
		{
			i++;
			printf("[%u] ", current->len);
			if (current->str == NULL)
				printf("[0] (nil)");
			else
				printf("%s\n", current->str);
			current = current->next;
		}
		return (i);
}
