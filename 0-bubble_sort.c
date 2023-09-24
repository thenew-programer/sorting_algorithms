#include "sort.h"

/**
* bubble_sort - sort an array using bubble sort algo
* @array: array to be sorted
* @size: size of the array
* Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;

	if (!array || size == 0)
		return;

	while (size != 1)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}
		}
		--size;
	}
}
