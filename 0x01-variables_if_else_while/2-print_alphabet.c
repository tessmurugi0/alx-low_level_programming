#include <stdio.h>
/**
 * main -prints alphabets in lowercae
 * using putchar.
 * Return: Always 0.
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar ('\n');
	return (0);
}
