#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the bubble sort algorithm.
 * @array: The array of integers to be sorted.
 * @size: The size of the array.
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;
	int flag;

	if (size < 2 || !array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0 ;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				flag = 1 ;
			}
		}
		if (flag == 0 ) 
			break;
	}
}
