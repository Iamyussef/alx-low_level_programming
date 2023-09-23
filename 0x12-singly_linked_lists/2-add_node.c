#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: address of pointer to head node
 * @str: string
 * Return: size of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
		ptr = malloc(sizeof(list_t));
		if (head == NULL || ptr == NULL)
			return (NULL);
		if (str != NULL)
		{
			ptr->len = strlen(str);
			ptr->str = strdup(str);
				if (ptr->str == NULL)
				{
					free(ptr);
					return (NULL);
				}
		}
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
