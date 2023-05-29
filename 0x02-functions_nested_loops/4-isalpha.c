#include "main.h"
#include <stdio.h>
/**
 * _isalpha - checks for alphabets
 * Description: uses isalpha to check fot alphabet
 * @c: character to check
 * Return: Success 1 else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
