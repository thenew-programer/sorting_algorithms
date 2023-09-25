#include "sort.h"

/**
* selection_sort - sort an array of int in ascending order
* using selection sort algo
*
* @array: array to be sorted
* @size: size of the array
*
* Return: nothing
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int flag, min, tmp;

	if (!array || size == 0)
		return;

	j = 1;
	while (j++ < size)
	{
		min = array[j - 1];
		flag = 0;
		for (i = 0; i < size; i++)
		{
			if (min > array[i])
			{
				min = array[i];
				tmp = array[i];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				flag = 1;
			}
		}

		if (flag == 0)
			break;
	}
}
