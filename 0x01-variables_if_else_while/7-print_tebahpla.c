#include <stdio.h>
/**
 * main - prints lowecase in reverse
 * using putchar
 * Return: Always 0.
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
