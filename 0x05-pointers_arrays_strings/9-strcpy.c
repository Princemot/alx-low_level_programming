#include "main.h"

/**
 * _strcpy - Copies a string pointed by src
 * @dest: copy the string.
 * @src: The source string to copy.
 *
 * Return: string @dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
