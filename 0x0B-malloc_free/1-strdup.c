#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function returns pointer
 * duplicate
 * @str: pointer used
 * Return: duplicate
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length;

	if (*str == '\0')
	{
		return (NULL);
	}
	length = strlen(str);
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
