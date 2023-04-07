#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int tmp;

	for (tmp = 0; tmp < n && src[tmp] != '\0'; tmp++)
		dest[tmp] = src[tmp];
	for ( ; tmp < n; tmp++)
		dest[tmp] = '\0';

	return (dest);
}
