#include "main.h"

/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	unsigned int tmp = 0;

	for (; *(s + tmp) != '\0'; tmp++)
		if (*(s + tmp) == c)
			return (s + tmp);
	if (*(s + tmp) == c)
		return (s + tmp);
	return ('\0');
}
