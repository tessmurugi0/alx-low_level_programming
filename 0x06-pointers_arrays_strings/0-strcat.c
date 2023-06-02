#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: pointer to the string
 */
char *_strcat(char *dest, char *src)
{
	int counta = 0;
	int countb = 0;

	while (dest[counta] != '\0')
		counta++;
	while (src[countb] != '\0')
	{
		dest[counta] = src[countb];
		counta++;
		countb++;
	}

	return (dest);
}
