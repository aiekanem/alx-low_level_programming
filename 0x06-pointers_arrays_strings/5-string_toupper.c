#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: Pointer to the string.
 * Return: Pointer to the resulting string.
 */

char *string_toupper(char *s)
{
    int i;

    /* Convert each lowercase letter to uppercase */
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }

    return s;
}
