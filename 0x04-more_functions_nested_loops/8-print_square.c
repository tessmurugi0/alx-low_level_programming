#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int hiegth, width;

	if (size > 0)
	{
		for (hiegth = 0; hiegth < size; hiegth++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');

			if (hiegth == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
