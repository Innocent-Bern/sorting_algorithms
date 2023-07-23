#include "sort.h"

/**
 * bubble_sort - funct that sorts an array of integers in ascending order.
 * @array: pointer to int array of integers
 * @size: number of items in the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t count = 0, index = 0;
	int temp;
	bool swapped = false;

	for (; index < size - 1; index++)
	{
		swapped = false;
		for (; count < size - index - 1; count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		count = 0;
		if (swapped == false)
			break;
	}
}
