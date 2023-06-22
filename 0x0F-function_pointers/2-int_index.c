#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searchfor int
 * @array: array of integer
 * @size: sixae of array
 * @cmp: pointer to the function
 * Return: array[0] sucess else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp && array)
	{
		if (size > 0)
		{
			for (; i < size; i++)
			{
				if (cmp(array[i] != 0))
						return (i);
			}
		}
	}
	return (-1);
}
