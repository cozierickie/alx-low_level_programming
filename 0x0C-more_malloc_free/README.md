0x0C. C - More malloc, free
Description
This project contains C programs that demonstrate the use of dynamic memory allocation functions malloc, calloc, realloc, and free. Each program focuses on a specific task related to memory allocation and deallocation.

Files
0 - malloc_checked.c: A function that allocates memory using malloc. If malloc fails to allocate memory, the program terminates with a status value of 98.
1 - string_nconcat.c: A function that concatenates two strings. The returned pointer points to a newly allocated space in memory that contains the first string followed by the first n bytes of the second string. If the function fails, it returns NULL.
2 - calloc.c: A function that allocates memory for an array using malloc. The memory is set to zero. If either the number of elements or the size of each element is 0, the function returns NULL. If malloc fails to allocate memory, the function also returns NULL.
3 - array_range.c: A function that creates an array of integers. The array contains all the values from min to max, inclusive, ordered from smallest to largest. If min is greater than max, the function returns NULL. If malloc fails to allocate memory, the function also returns NULL.
main.h: Header file that contains function prototypes.
