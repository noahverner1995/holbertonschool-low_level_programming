#include <stdio.h>

/**
 * main - Print the first 50 fibonnaci numbers starting with 1 and 2
 *
 * Return: 0 success
 */
int main(void)
{
unsigned long x1 = 0, x2 = 1, next = 0, n = 50;

while (n != 0)
{
next = x1 + x2;
x1 = x2;
x2 = next;
printf("%lu", next);
if (n > 1)
{
printf(", ");
}
n--;
}
putchar('\n');

return (0);
}
