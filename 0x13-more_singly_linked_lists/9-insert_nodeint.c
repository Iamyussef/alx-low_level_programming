#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - nserts a new node at a given position.
 * @head: pointer to a pointer to the first node
 * @idx: the position where the new node sould be inserted
 * @n: data
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *current, *temp = *head;
	unsigned int i = 0;
		ptr = malloc(sizeof(listint_t));
		if (head == NULL || ptr == NULL)
			return (NULL);
	ptr->n = n;
	ptr->next = NULL;
		if (idx == 0 && *head == NULL)
			*head = ptr;
		else
		{
			while (i <= idx && temp != NULL)
			{
				if (i + 1 == idx)
				{
					current = temp;
					temp = temp->next;
					i++;
					continue;
				}
				else if (i == idx)
				{
					current->next = ptr;
					ptr->next = temp;
					break;
				}
				else
				{
				temp = temp->next;
				i++;
				}
			}
		}
		if (i < idx)
		{
			free(ptr);
			return (NULL);
		}
		return (*head);
}
