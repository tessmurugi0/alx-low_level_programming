#include "main.h"
/**
 * _strlen - function that returns the lenght of the string
 * @s: input string
 *
 * Return: void that means the answer is correct
 */
int _strlen(char *s)
{
	int u;

	for(u = 0; s[u] != '\0'; u++);

	return (u);
}
