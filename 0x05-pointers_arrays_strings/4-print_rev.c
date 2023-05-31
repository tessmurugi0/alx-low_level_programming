#include "main.h"
/**
 * print_rev - Prints string reverse.
 * @s: The string.
 */
void print_rev(char *s)
{
	int length = 0, ind;

	while (s[ind++])
		length++;

	for (ind = length - 1; ind >= 0; ind--)
		_putchar(s[ind]);

	_putchar('\n');
}
