#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: a pointer to the first node
 * @index: the index of the node
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

		if (head == NULL)
			return (NULL);
		while (i <= index)
		{
			if (i == index)
				break;
			ptr = ptr->next;
			i++;
		}
	return (ptr);
}

