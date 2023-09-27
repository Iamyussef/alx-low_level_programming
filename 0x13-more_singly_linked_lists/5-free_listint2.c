#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *  free_listint2 - frees memory allocated on the heap
 *  @heap: a pointer to a pointer to the first node.
 *  Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *next;
		while (ptr != NULL)
		{
			next = ptr->next;
			free(ptr);
			ptr = next;
		}
	*head = NULL;
}
