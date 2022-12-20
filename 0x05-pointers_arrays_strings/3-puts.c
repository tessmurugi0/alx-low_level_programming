#include "main.h"
/**
 * _puts - writes a functin that prints a string, followed ny a new line to stdout
 * @str: input string
 */
void _puts(char *str);
{
	int index;

	for (index =0; str[index] != '\O'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

