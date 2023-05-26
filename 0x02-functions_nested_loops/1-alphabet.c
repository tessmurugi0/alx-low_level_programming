#include <stdio.h>
/**
 * main - prints alphabets in lowercase 
 * using putchar
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
