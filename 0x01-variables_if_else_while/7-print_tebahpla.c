#include <stdio.h>

/**
 * main - Print all the alphabet lowercase reversed using putchar only
 * Return: 0 Success
 */
int main(void)
{
int i;

for (i = 122; i >= 97; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
