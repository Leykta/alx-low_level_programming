#include "main.h"

/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 *
 * Return: the pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int tmp;

	for (tmp = 0;  tmp< n; tmp++)
		*(dest + tmp) =  *(src + tmp);

	return (dest);
}
