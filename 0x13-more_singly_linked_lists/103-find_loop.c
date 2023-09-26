#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snake, *whale;

	snake = whale = head;
	while (snake && whale && whale->next)
	{
		snake = snake->next;
		whale = whale->next->next;
		if (snake == whale)
		{
			snake = head;
			break;
		}
	}
	if (!snake || !whale || !whale->next)
		return (NULL);
	while (snake != whale)
	{
		snake = snake->next;
		whale = whale->next;
	}
	return (whale);
}
