#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point of the program
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 * Return: 0 if successful, error code otherwise
 */

int main(int argc, char **argv)
{
    int num1, num2, result;
    char *op;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    op = argv[2];

    if (num2 == 0 && (*op == '/' || *op == '%'))
    {
        printf("Error\n");
        return (100);
    }

    op_func = get_op_func(op);
    if (op_func == NULL)
    {
        printf("Error\n");
        return (99);
    }

    result = op_func(num1, num2);
    printf("%d\n", result);

    return (0);
}
