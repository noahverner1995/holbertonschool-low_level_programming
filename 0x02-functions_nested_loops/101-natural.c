#include <stdio.h>

/**
 * main - Print the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: 0 success
 */
int main(void)
{
int i, ans = 0;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
ans += i;
}
}
printf("%d\n", ans);

return (0);
}
