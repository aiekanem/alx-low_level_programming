#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of arguments
 * @av: array of pointers to arguments
 * Return: pointer to the concatenated string
 *         NULL if ac == 0, av == NULL or if memory allocation fails
 */

char *argstostr(int ac, char **av)
{
        int i, j, len = 0, total_len = 0;
        char *str;

        /* check for NULL or 0 input */
        if (ac == 0 || av == NULL)
                return (NULL);

        /* calculate total length of all arguments */
        for (i = 0; i < ac; i++)
        {
                len = 0;
                while (av[i][len])
                        len++;
                total_len += len;
        }

        /* allocate memory for concatenated string */
        str = malloc(sizeof(char) * (total_len + ac + 1));
        if (str == NULL)
                return (NULL);

        /* concatenate arguments and add newlines */
        for (i = 0, j = 0; i < ac; i++, j++)
        {
                len = 0;
                while (av[i][len])
                {
                        str[j++] = av[i][len];
                        len++;
                }
                str[j] = '\n';
        }
        str[j] = '\0';

        return (str);
}
