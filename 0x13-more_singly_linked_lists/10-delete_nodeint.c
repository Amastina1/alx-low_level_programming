#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *str, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	str = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (str->next == NULL)
			return (-1);
		str = str->next;
	}
	next = str->next;
	str->next = next->next;
	free(next);
	return (1);

}
