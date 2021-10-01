#include <stdio.h>

/**
 * main - Print numbers from 0 to 9 using only the putchar function
 * Return: 0 Success
 */
int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
putchar(i);
}

putchar('\n');
return (0);
}
