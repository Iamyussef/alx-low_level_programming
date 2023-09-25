#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a node to the end of the list
 * @head: address of pointer to head node
 * @str: str field of node
 * Return: size of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *current = malloc(sizeof(list_t));
		if (current == NULL)
		{
			return (NULL);
		}
	current->str = strdup(str);
		if (current->str == NULL)
		{
			free(current);
			return (NULL);
		}
	current->len = strlen(str);
	current->next = NULL;
		if (*head == NULL)
		{
			*head = current;
		}
		else
		{
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = current;
		}
		return (*head);
}
