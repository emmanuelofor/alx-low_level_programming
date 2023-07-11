#include "search_algos.h"

/**
  * jump_search - Implements jump search to find a value in a sorted integer array.
  * @array: A pointer to the first element of the array to search in.
  * @size: The total number of elements in the array.
  * @value: The value to look for.
  *
  * Return: If the value is absent or the array is NULL, returns -1.
  *         Otherwise, returns the first index where teh value is located.
  *
  * Description: Prints a value each time it is compared in the array.
  *              Uses the square root of the array size as the jump interval.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
