/*
 * File: 0-linear.c
 * Auth: Brennan D Baraban
 */

#include "search_algos.h"

/**
  * linear_search - Implements a linear search algorithm to find
  *                 a specific value in an array of integers
  * @array: A pointer to the first element of the array being searched.
  * @size: The total number of elements in the array.
  * @value: The value to find within the array.
  *
  * Return: If the array is NULL or the value isn't found,return -1.
  *         Otherwise, if the value is found, return the index of its first occurence.
  *
  * Description: The function prints each value as it is compared within the array.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
