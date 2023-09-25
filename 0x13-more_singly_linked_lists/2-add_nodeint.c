#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning
 * of listint_t list
 * @h: head of a double pointer
 * @n: int for the new node
 *
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

		ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (ptr);
}
