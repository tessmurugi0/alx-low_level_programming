#include <stdio.h>
/**
 * _print_rev_recursion - print sting in reverse
 * @S: character used
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
