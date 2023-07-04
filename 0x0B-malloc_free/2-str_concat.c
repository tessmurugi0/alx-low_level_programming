#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenats 2 string
 * @s1: sting 1
 * @s2: string 2
 * Return: return concat
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int length;
       	unsigned int length2;
	unsigned int total;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length = strlen(s1);
	length2 = strlen(s2);
	total = length + length2;

	concat = (char *)malloc((total + 1) *sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}
