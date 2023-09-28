#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - calculates the data(n)
 * @head: a pointer to the first node
 * Return: sum of all data.
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;
		if (head == NULL)
			return (0);
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	return (sum);
}
