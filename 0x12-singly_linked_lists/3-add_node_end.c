#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 *
 * @head: Double pointer to the list_t list.
 * @str: String to put in the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int len = 0;

	/* Calculate the length of the string */
	while (str[len])
		len++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	/* Duplicate the string and assign values to the new node */
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	/* Handle the case when the list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to find the last node */
	while (temp->next)
		temp = temp->next;

	/* Attach the new node to the end of the list */
	temp->next = new_node;

	return (new_node);
}
