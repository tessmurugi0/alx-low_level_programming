#include <stdio.h>
/**
 * main - entry point
 * Description: Combinatio of 2 double-digit numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j;

	for (; i < 100; i++)
	{
		for (i = j; j < 100 ; j++)
		{
			if (i != j)
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(' ');
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);

				if (i != 98 || j != 99)
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
