#include "sort.h"
#include <inttypes.h>


/**
 * swap - function that swap value
 * @a: pointer to the first value
 * @b: pointer to the second value
 * Return: nothing void
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * split_array - split the array in two sub arrays
 *
 * @array: the array to be partitioned
 * @low: low position in the array
 * @high: high position in the array
 * @size: size of the array
 *
 * Return:  size
 */
size_t split_array(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t i = (low - 1), j;

	for (j = low; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
* qs - funciton that does everything
*
* @array: array to be sorted
* @size: size of the array
* @high: high position
* @low: low postion
*
* Return: nothing
*/
void qs(int *array, int low, int high, size_t size)
{
	int index;

	if (low < high)
	{
		index = split_array(array, low, high, size);
		qs(array, low, index - 1, size);
		qs(array, index + 1, high, size);
	}
}

/**
* quick_sort - sort an array of integers in ascending order
* using quick sort algorithm
*
* @array: array to be sorted
* @size: size of the array
*
* Return: nothing
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	qs(array, 0, size - 1, size);
}

