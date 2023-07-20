#include "main.h"
/**
 * binary_to_uint - convert binary to integer
 * @b: a ponter to string of char 0 or 1.
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 * otherwise return a converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, multi = 1;
	int length;

	if (*b == '\0')
		return (0);
	for (length = 0; b[length];)
		length++;
	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		number += (b[length] - '0') * multi;
		multi *= 2;
	}
	return (number);
}
