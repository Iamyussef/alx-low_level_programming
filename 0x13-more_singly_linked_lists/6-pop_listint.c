#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 * @head: a pointer to the first node.
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i = 0;
		if (*head == NULL || head == NULL)
			return (0);
	temp = (*head)->next;
	i = (*head)->n;
	*head = temp;
	free(temp);
	return (i);
}
