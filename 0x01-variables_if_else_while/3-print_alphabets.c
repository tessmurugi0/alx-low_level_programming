#include <stdio.h>
/**
 * main - prints alphabets from
 * uppercase to lowercase
 * Return: Always 0.
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
