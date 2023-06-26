#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an essay
 * @size: the size
 * @c: character used
 * Return: returns the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc((size + 1) * sizeof(char));
		if (array == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < size; i = i + 1)
	{
		array[i] = c;
	}
	array[size] = '\0';
	return (array);
}
