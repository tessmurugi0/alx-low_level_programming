/* This program prints the alphabet in lowercase  */

#include <stdio.h>

/**
 * print_alphabet - Prints alphabets in lowercase.
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 *              using the putchar function.
 *
 * Return: void
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
