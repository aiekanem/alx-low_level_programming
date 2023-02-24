#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
    long int n = 612852475143;
    long int i;

    while (n % 2 == 0)
    {
        n /= 2;
        i = 2;
    }

    for (i = 3; i <= n; i += 2)
    {
        while (n % i == 0)
        {
            n /= i;
            if (n == 1 || n == i)
            {
                printf("%ld\n", i);
                return (0);
            }
        }
    }

    return (0);
}
