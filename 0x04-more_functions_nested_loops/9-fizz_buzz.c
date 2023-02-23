#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the numbers from 1 to 100, but for multiples of
 * three, "Fizz" is printed instead of the number. For multiples of five,
 * "Buzz" is printed instead of the number. For multiples of both three
 * and five, "FizzBuzz" is printed instead of the number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz ");
        else if (i % 3 == 0)
            printf("Fizz ");
        else if (i % 5 == 0)
            printf("Buzz ");
        else
            printf("%d ", i);
    }
    printf("\n");
    return (0);
}
