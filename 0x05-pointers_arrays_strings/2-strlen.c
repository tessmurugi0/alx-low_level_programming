#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: The string 
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	char length = 0;

	while (*s++)
		length++;
	return (length);
}
