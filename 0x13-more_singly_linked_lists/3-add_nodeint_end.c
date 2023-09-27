#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the endof a listint_t list.
 * @head: a poniter to a pointer to the first node
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *temp = malloc(sizeof(listint_t));
		if (temp == NULL)
		{
			return (NULL);
		}
	temp->n = n;
	temp->next = NULL;
		if (*head == NULL)
		{
			*head = temp;
		}
		else
		{
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = temp;
		}

	return (*head);
}
