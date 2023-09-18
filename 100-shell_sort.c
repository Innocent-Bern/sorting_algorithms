#include "sort.h"

/**
 * swap - function that swaps 2 integers in an array
 * @x: input int
 * @y: input int
 * Return: void
*/
void swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}

/**
 * shell_sort - function that sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 * @array: input array of integers
 * @size: number of items in the array.
 * Return: void
*/
void shell_sort(int *array, size_t size)
{
	size_t space, i, x;

	if (array == NULL || size < 2)
		return;

	for (space = 1; space < (size / 3);)
		space = space * 3 + 1;

	for (; space >= 1; space /= 3)
	{
		for (i = space; i < size; i++)
		{
			x = i;
			while (x >= space && array[x - space] > array[x])
			{
				swap(array + x, array + (x - space));
				x -= space;
			}
		}
		print_array(array, size);
	}
}
