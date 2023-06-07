#include <stdio.h>
/**
 * _strlen_recursion - prints length
 * of string
 * @s: character used
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	char length = 0;

	while(*s++)
		length++;
	return (length);
}
