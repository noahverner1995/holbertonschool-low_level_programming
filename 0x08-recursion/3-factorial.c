#include "main.h"

/**
 * factorial - Get the factorial of a given number with recursion
 * @n: integer variable
 * Return: Integer variable
 */
int factorial(int n)
{
  if (n < 0)
    return (-1);
  if (n > 0)
    return (n * factorial(n - 1));
  return (1);
}
