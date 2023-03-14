#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Prints the name of the program to standard output.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
    char *program_name = get_program_name(argv[0]);
    printf("%s\n", program_name);
    free(program_name);
    return EXIT_SUCCESS;
}
