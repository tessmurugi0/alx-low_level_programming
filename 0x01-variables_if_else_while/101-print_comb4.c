#include <stdio.h>
/**
 * main - entry point
 * Description: Print combination of 3 digits
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int k = 0;
	int a = 0;

	for (; i < 10; i++)
	{
		for (; k < 10; k++)
		{
			for (; a < 10; a++)
			{
				if (i != a && i != k && k != a && i < k && k < a)
				{
					putchar('0' | i);
					putchar('0' | k);
					putchar('0' | a);

					if (i + k + a != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
