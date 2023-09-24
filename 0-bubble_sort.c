#include "sort.h"

/**
* bubble_sort - sort an array using bubble sort algo
* @array: array to be sorted
* @size: size of the array
* Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, flag;

	if (!array || size == 0)
		return;

	j = size;
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j]  > array[j + 1])
			{
				tmp = array[j];
				array[j + 1] = array[j];
				array[j + 1] = tmp;
				print_array(array, size);
				flag = 1;
			}

		}

		if (flag == 0)
			break;
	}
}
