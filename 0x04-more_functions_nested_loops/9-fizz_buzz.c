#include <stdio.h>

/**
 * main - Fizz Buzz test, prints numbers from 1 to 100
 * but for multiples of 3 print "Fizz" instead of
 * the number and for the multiples of 5 print "Buzz"
 * Also, print "FizzBuzz" for numbers which are multiples of both 3 and 5
 * Return: Always 0.
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
}
else
{
printf("%d", i);
}
if (i != 100)
putchar(' ');
}
putchar('\n');

return (0);
}
