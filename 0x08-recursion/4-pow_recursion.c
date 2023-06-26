#include "main.h"
/**
 * _pow_recursion - return the power of x raised by y
 * @x: value to be raised
 * @y: power
 * Return: the value of x after been raied by y
 */
int _pow_recursion(int x, int y)
{
	int answer = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		answer *= _pow_recursion(x, y - 1);
		return (answer);
	}
}
