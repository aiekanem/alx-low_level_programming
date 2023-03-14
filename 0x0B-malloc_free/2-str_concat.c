#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Pointer to newly allocated space in memory, containing
 * the concatenated string. NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
    int i, j, len1 = 0, len2 = 0;
    char *concat_str;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    concat_str = malloc((len1 + len2 + 1) * sizeof(char));

    if (concat_str == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concat_str[i] = s1[i];

    for (j = 0; j < len2; j++)
        concat_str[len1 + j] = s2[j];

    concat_str[len1 + len2] = '\0';

    return (concat_str);
}
