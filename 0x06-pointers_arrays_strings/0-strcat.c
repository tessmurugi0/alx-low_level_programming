#include "main.h"
/**
 * _strcat - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * Returns: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int g;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	g = 0;
	while (src[g] != '\0')
	{
		dest[a] = src[g];
		a++;
		g++;
	}
	return (dest);
}
