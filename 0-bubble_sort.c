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
	while (j != 1)
	{
		flag = 0;
		for (i = 0; i < j; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				flag = 1;
			}
		}
		--j;
		if (flag == 0)
			break;
	}
}
