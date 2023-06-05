#include <stdio.h>
/**
 * main - entry point
 * Description: Print combination of 2 digits
 * Return: 0
 */
int main(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (i != k && i < k)
			{
				putchar('0' | i);
				putchar('0' | k);

				if (i + k != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
