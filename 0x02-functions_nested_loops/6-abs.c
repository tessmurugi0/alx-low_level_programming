#include <stdio.h>
#include "main.h"
/**
 * _abs - computes absolute values
 * @j: The integer to be computed
 * Description: computes the absolute value of an integer.
 * Return: always 0.
 */
int _abs(int j)
{
	if (j >= 0)
		return (j);
	else
		return (-j);
}
