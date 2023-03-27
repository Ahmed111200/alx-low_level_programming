#include "main.h"

/**
 * _puts - print a string, followed by a newline to stdout
 *
 *@str: string parameter to print
 *Return: Nothing
*/


void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
