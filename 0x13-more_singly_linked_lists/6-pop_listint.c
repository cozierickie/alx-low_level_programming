#include "lists.h"

/**
 * pop_listint - Removes the first node of a linked list.
 * @head: Double pointer to the first element in the linked list.
 *
 * Return: The value stored in the element that was removed, or 0
 * if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (!head || !*head)
		return (0);

	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (value);
}
