#include "sort.h"

/**
 * partition - Divides array into 2 partitions
 * @low: integer input
 * @high: integer input
 * @size: number of items in the array
 * Return: index of the 
*/
int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high], i = low - 1, tmp,j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			print_array(arr, size);
		}
	}
	tmp = arr[i + 1];
	arr[i + 1] = arr[j];
	arr[j] = tmp;
	print_array(arr, size);
	return (i + 1);
}
/**
 * quick_sort - function that sorts an array of integers in ascending order
 * @array: pointer to array of integers
 * @size: number of items in the array.
*/
void quick_sort(int *array, size_t size)
{
	int pix;

	if (size > 0)
	{
		pix = partition(array, size - pix, size, size);

		quick_sort(array, size - pix);
		quick_sort(array, size);
	}
}
