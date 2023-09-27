#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 *  free_listint2 - frees memory allocated on the heap
 *  @head: a pointer to a pointer to the first node.
 *  Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	if (head != NULL)
		return;

	ptr = *head;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	*head = NULL;
}
