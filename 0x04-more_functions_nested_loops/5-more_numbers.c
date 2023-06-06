#include "main.h"

/**
 * more_numbers - entry
 *
 * Description: print ints
 */
void more_numbers(void)
{
	int k = 0;
	int n = 0;

	for (; n < 10; n++)
	{
		for (; k < 15; k++)
		{
			if (k > 9)
			{
				_putchar(48 + k / 10);
			}
			_putchar(48 + k % 10);
		}
		_putchar('\n');
	}
}
