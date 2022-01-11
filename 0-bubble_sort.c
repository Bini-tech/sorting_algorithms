#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of ints to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	int temp;
	int flag = 1;

	if (size < 2)
		return;
	while (flag)
	{
		flag = 0;
		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
	}
}
