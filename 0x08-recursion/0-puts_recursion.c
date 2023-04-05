#include "main.h"

/**
 * 0-puts_recuresion - prints a string followed by new line
 * @s - string parameter
 * Return - nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
