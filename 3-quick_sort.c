#include "sort.h"

/**
 * partition - Divides array into 2 partitions
 * @arr: pointer to array of integers
 * @low: starting index
 * @high: last index
 * @size: number of items in the array
 * Return: int
*/
int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high], i = low - 1, tmp, j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	tmp = arr[i + 1];
	arr[i + 1] = arr[j];
	arr[j] = tmp;
	print_array(arr, size);
	return (i + 1);
}
/**
 * part_sort - recursive function sorts array of integers
 * @array: pointer to array of integers
 * @size: number of items in array
 * @low: starting index
 * @high: lasing index
*/
void part_sort(int *array, size_t size, int low, int high)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);

		part_sort(array, size, low, pi - 1);
		part_sort(array, size, pi + 1, high);
	}
}
/**
 * quick_sort - function that sorts an array of integers in ascending order
 * @array: pointer to array of integers
 * @size: number of items in the array.
*/
void quick_sort(int *array, size_t size)
{
	part_sort(array, size, 0, size - 1);
}
