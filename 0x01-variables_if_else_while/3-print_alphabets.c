#include <stdio.h>

/**
 * main - Print the alphabet first in lowercase and then in uppercase
 * Return: 0 Success
 */
int main(void)
{
int i;

for (i = 97; i <= 122; i++)
{
putchar(i);
}
for (i = 65; i <= 90; i++)
{
putchar(i);
}

putchar('\n');
return (0);
}
