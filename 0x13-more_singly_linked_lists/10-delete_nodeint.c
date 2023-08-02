#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at
 * a certain index.
 * @head: Pointer to the first element in the list.
 * @index: Index of the node to delete.
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *next_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (i < index - 1)
	{
		if (current == NULL || current->next == NULL)
			return (-1);

		current = current->next;
		i++;
	}

	next_node = current->next;
	if (next_node == NULL)
		return (-1);

	current->next = next_node->next;
	free(next_node);

	return (1);
}
