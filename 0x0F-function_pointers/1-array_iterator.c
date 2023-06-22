#include "function_pointers.h"
/**
 * array_iterator - iterates every element
 * @size: size of array
 * @array: array
 * @action: iterates
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
