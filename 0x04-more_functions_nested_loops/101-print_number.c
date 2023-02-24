#include "main.h"


/**
 * print_number - print any integer using putchar
 * @n: integer to be printed
 */

void print_number(int n)
{
  int digit, divisor = 1;

  if (n < 0) {
    _putchar('-');
    n *= -1;
  }

  while (n / divisor >= 10) {
    divisor *= 10;
  }

  while (divisor > 0) {
    digit = n / divisor;
    _putchar(digit + '0');
    n -= digit * divisor;
    divisor /= 10;
  }
}
