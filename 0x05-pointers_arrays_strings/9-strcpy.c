#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating null byte (\0),
 *           to the buffer pointed to by dest.
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string.
 * Return: A pointer to the destination buffer.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy each character of src to dest until the null terminator is reached */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Copy the null terminator to the end of dest */
	dest[i] = '\0';

	return dest;
}
