#include <stdio.h>
#include <ctype.h>
/**
 * print_sign - checks sign of number
 * @n: character to check
 *
 * Description: Uses function to check the number sign.
 * Return: Returns 1 if c is an alphabet, 0 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
