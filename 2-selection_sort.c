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
	int min, comparisonFlag, idx, tmp;

	if (!array || size < 2)
		return;

	j = 1;
	while (j < size)
	{
		min = *(array + j - 1);
		comparisonFlag  = 0;
	for (i = j; i <= size - 1; i++)
	{
		if (min > *(array + i))
		{
			min = *(array + i);
			idx = i;
			comparisonFlag = 1;
		}
	}
	if (comparisonFlag == 1)
	{
		tmp = *(array + j - 1);
		*(array + j - 1) = *(array + idx);
		*(array + idx) = tmp;
		print_array(array, size);
	}
	j++;
	}

}
