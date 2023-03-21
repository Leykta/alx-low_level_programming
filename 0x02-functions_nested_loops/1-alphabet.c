#include "main.h"

/**
 * prints the alphabet in lowercase
 *
 * return 0 on success
 */

void print_alphabe(void)
{
        char ch;

	ch='a';

	while(ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
