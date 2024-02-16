0x1A. C - Hash Tables
Introduction
This project delves into hash tables in C, covering topics such as hash functions, collision resolution, and the implementation of basic hash table operations. The goal is to build a solid understanding of hash tables, their functions, and practical applications.

Data Structures
Utilize the following data structures for this project:

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;


Tasks Overview
Hash Table Creation: Implement a function to create a hash table.
djb2 Hash Function: Develop a hash function using the djb2 algorithm.
Key to Index: Create a function to determine the index of a key in the hash table array.
Hash Table Set: Write a function to add or update an element in the hash table.
Hash Table Get: Implement a function to retrieve the value associated with a key.
Hash Table Print: Create a function to print the hash table.
Hash Table Delete: Develop a function to delete a hash table.
Advanced Task
Sorted Hash Table: Implement a hash table that maintains a sorted linked list.

Usage Example

#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "key", "value");
    hash_table_print(ht);
    hash_table_delete(ht);

    return (0);
}
