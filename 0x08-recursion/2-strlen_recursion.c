#include <stdio.h>
/**
 * _strlen_recursion - prints length
 * of string
 * @s: character used
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (length);
	}
	_strlen_recursion(s + 1);
	length++;
}
