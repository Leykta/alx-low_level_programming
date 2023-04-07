#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int tmp = 0;

	while (str[tmp])
	{
		_putchar(str[tmp]);
		tmp++;
	}
	_putchar('\n');
}
