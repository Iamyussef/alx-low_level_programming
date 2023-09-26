#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: a pointer to a pointer to the first node
 * @n: int
 * Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
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
				temp->next = *head;
				*head = temp;
			}
	return (*head);
}
