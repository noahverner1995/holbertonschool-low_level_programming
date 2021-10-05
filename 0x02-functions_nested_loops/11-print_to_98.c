#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers from n to 98 
 * @n: Integer parameter
 */
void print_to_98(int n)
{
int i;

if (n < 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
putchar('\n');
}
else if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
putchar('\n');
}
else
{
printf("%d", n);
putchar('\n');
}
}
