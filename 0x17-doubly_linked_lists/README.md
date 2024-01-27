0x17. C - Doubly linked lists

This repository contains solutions to various tasks related to doubly linked lists in C.

Task 0: Print List
Write a function print_dlistint that prints all the elements of a dlistint_t list.

Prototype: size_t print_dlistint(const dlistint_t *h);
Return: The number of nodes
Format: See example
Task 1: List Length
Write a function dlistint_len that returns the number of elements in a linked dlistint_t list.

Prototype: size_t dlistint_len(const dlistint_t *h);
Task 2: Add Node
Write a function add_dnodeint that adds a new node at the beginning of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
Return: The address of the new element, or NULL if it failed
Task 3: Add Node at End
Write a function add_dnodeint_end that adds a new node at the end of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
Return: The address of the new element, or NULL if it failed
Task 4: Free List
Write a function free_dlistint that frees a dlistint_t list.

Prototype: void free_dlistint(dlistint_t *head);
Task 5: Get Node at Index
Write a function get_dnodeint_at_index that returns the nth node of a dlistint_t linked list.

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
Task 6: Sum List
Write a function sum_dlistint that returns the sum of all the data (n) of a dlistint_t linked list.

Prototype: int sum_dlistint(dlistint_t *head);
Task 7: Insert at Index
Write a function insert_dnodeint_at_index that inserts a new node at a given position.

Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
Task 8: Delete at Index
Write a function delete_dnodeint_at_index that deletes the node at index index of a dlistint_t linked list.

Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
