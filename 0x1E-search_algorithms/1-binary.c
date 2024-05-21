#include "search_algos.h"
/**
 * binary_search - searches for a value using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located if found, else return -1
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t high, low, mid;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		print_array(array, low, high);
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}

/**
 * print_array - prints array items
 * @array: array to be printed
 * @low: lowest index to start from
 * @high: highest index to stop at
 **/
void print_array(int *array, size_t low, size_t high)
{
	for (low = low; low <= high; low++)
	{
		printf("%d", array[low]);
		if (low != high)
			printf(", ");
	}
	printf("\n");
}
