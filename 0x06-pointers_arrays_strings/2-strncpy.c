#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be copied from src.
 * Return: Pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i;

    /* Copy at most n bytes from the source string to the destination string */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* If the source string has less than n bytes, fill the remaining bytes with null characters */
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}
