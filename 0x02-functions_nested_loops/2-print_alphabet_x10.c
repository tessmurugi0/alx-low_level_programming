#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet
 * ten times
 * Description: prints using the function
 * putchar
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char n;

	while (count < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			putchar(n);
		}
		putchar('\n');
		count++;
	}
}
