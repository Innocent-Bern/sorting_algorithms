#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: list of unsorted arrays
 * @size: number of items in array
*/
void selection_sort(int *array, size_t size)
{
	size_t index = 0, small = 0, count = 0;
	int tmp;

	while (count < size)
	{
		small = count;
		for (index = count; index < size; index++)
		{
			if (array[index] < array[small])
				small = index;
		}
		if (small != count)
		{
			tmp = array[small];
			array[small] = array[count];
			array[count] = tmp;
			print_array(array, size);
		}
		count++;
	}
}
