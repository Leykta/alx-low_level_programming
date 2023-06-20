#include "main.h"

/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int tmp1;
	int tmp2;

	tmp1 = 0;
	tmp2 = 0;

	while (dest[tmp1] != '\0')
	{
		tmp1++;
	}

	while (src[tmp2] != '\0')
	{
		dest[tmp1] = src[tmp2];
		tmp2++;
		tmp1++;
	}

	dest[tmp1] = '\0';
	return (dest);
}
