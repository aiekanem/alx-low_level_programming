#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * Return: 0 if the strings are equal, a negative value if s1 is less than s2, or a positive value if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
    int i;

    /* Compare the characters in the strings until a difference is found */
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            break;
        }
    }

    /* Return the difference between the characters or 0 if the strings are equal */
    return s1[i] - s2[i];
}
