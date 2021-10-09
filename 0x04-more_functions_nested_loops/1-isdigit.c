#include "main.h"

/**
 * _isdigit - Check for a digit through 0 to 9
 *
 * @c: Integer parameter
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
if (c > 47 && c < 58)
return (1);
else
return (0);
}
