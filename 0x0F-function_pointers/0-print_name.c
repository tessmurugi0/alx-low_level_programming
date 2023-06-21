#include <stdio.h>
/**
 * print_name - prints name
 * @name: name used
 * @f: character used
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
