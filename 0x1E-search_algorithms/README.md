Search Algorithms Project
This project implements various search algorithms in C and includes the analysis of their time complexities. It covers both array and linked list data structures, showcasing basic and advanced search techniques.

Files and Descriptions
Search Algorithms
0-linear.c

Implements the linear search algorithm.
Function: int linear_search(int *array, size_t size, int value)
1-binary.c

Implements the binary search algorithm.
Function: int binary_search(int *array, size_t size, int value)
100-jump.c

Implements the jump search algorithm.
Function: int jump_search(int *array, size_t size, int value)
102-interpolation.c

Implements the interpolation search algorithm.
Function: int interpolation_search(int *array, size_t size, int value)
103-exponential.c

Implements the exponential search algorithm.
Function: int exponential_search(int *array, size_t size, int value)
104-advanced_binary.c

Implements an advanced binary search algorithm to find the first occurrence of a value.
Function: int advanced_binary(int *array, size_t size, int value)
105-jump_list.c

Implements the jump search algorithm for a sorted singly linked list.
Function: listint_t *jump_list(listint_t *list, size_t size, int value)
106-linear_skip.c

Implements the linear search algorithm for a sorted skip list.
Function: skiplist_t *linear_skip(skiplist_t *list, int value)
Time Complexity Analysis
2-O

Time complexity of linear search: O(n)
3-O

Time complexity of checking the first element in an array: O(1)
4-O

Time complexity of binary search: O(log(n))
5-O

Time complexity of checking a single element in a sorted array: O(1)
6-O

Time complexity of a double loop over two arrays: O(n * m)
101-O

Time complexity of jump search: O(√n)
107-O

Time complexity of linear search in a skip list: O(√n)
Data Structures
listint_t and skiplist_t structures are used for linked lists and skip lists respectively. They are defined in search_algos.h.
Compilation
Compile the C files using the following command:

gcc -Wall -Wextra -Werror -pedantic *.c -o search_algos


Usage
Include search_algos.h in your C program to use these search algorithms. Each function returns the index of the target value or -1 if the value is not found.
