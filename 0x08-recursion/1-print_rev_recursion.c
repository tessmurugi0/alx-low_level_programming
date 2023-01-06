#include "main.h"
/**
 * _print_rev_recursion - prints sting reverse
 * @s: character value
 * Return: A lways 0 .
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
