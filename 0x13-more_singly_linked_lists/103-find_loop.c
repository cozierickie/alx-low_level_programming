#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for the loop
 *
 * Return: Address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_runner = head;
	listint_t *fast_runner = head;

	if (!head)
		return (NULL);

	while (slow_runner && fast_runner && fast_runner->next)
	{
		fast_runner = fast_runner->next->next;
		slow_runner = slow_runner->next;

		if (fast_runner == slow_runner)
		{
			slow_runner = head;
			while (slow_runner != fast_runner)
			{
				slow_runner = slow_runner->next;
				fast_runner = fast_runner->next;
			}
			return (fast_runner);
		}
	}

	return (NULL);
}
