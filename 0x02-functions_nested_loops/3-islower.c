#include <stdio.h>
#include <ctype.h>
/**
 * _islower - checks if a character is lowercase
 * @c: character to check
 *
 * Description: Returns 1 if the character is lowercase, 0 otherwise.
 * Return: Always 0.
 */
int _islower(int c)
{
	if( c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
