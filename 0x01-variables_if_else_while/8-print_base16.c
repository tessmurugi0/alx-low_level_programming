#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 -> success
 */

int main(void)
{
	int num = '0';
	char alpha = 'a';

	for (; num <= '9'; num++)
	{
		putchar(num);
	}

	for (; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');

	return (0);
}
