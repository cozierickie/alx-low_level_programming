#include "search_algos.h"
/**
 * jump_search - searches for a value using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located if found, else return -1
 **/
int jump_search(int *array, size_t size, int value)
{
	int jump, low, high;

	if (!array || size == 0)
		return (-1);

	jump = (int)sqrt(size);
	low = 0;
	high = jump;

	while (low <= (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (value == array[low])
			return (low);
		if (value > array[low] && value <= array[high])
		{
			printf("Value found between indexes [%d] and [%d]\n", low, high);
			return (jump_linear_search(array, low, high, value, size));

		}
		if (value > array[high])
		{
			low = high;
			high += jump;
		}
	}

	low = low - jump;
	high = high - jump;
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	return (jump_linear_search(array, low, high, value, size));
}

/**
 * jump_linear_search - helper function to use linear search
 * @array: array to search in
 * @low: start index
 * @high: stop index
 * @value: value to search for
 * @size: size of array
 *
 * Return: the first index where value is located if found, else return -1
 **/

int jump_linear_search(int *array, int low, int high, int value, int size)
{
	if (!array)
		return (-1);

	if (high > size)
		high = size - 1;

	for (low = low; low <= high; low++)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}
	return (-1);
}
