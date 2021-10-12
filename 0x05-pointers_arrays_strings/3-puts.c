#include "main.h"

/**
 * _puts - Print a string to stdout followed by a new line
 *
 * @str: Pointer of char[] variable
 */
void _puts(char *str)
{
char *t;

for (t = str ; *t != '\0'; t++)
{
_putchar(*t);
}
_putchar('\n');
}
