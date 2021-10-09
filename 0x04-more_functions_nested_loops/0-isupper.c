#include "main.h"

/**
 * _isupper - Check for uppercase character
 *
 * @c: Integer parameter
 * Return: 1 if uppercase character else 0
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
else
return (0);
}
