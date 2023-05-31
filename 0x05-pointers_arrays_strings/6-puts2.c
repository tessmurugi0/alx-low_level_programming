#include "main.h"
/**
 * puts2 - print alternative characters of string
 * @str: pointer to string to print
 *
 * Return: none
 */
void puts2(char *str)
{
	char i = *str;
	int length = 0;

	while (i != '\0')
	{
		if ((length % 2) == 0)
			_putchar(i);
		length++;
		i = *(str + length);
	}
	_putchar('\n');
}
