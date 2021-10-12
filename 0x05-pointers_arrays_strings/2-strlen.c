#include "main.h"

/**
 * _strlen - get the lenght of 1 string variable
 *
 * @s: Pointer of char variable
 * Return: Integer value
 */
int _strlen(char *s)
{
char *t;
int counter = 0;

for (t = s; *t != '\0'; t++)
counter++;

return (counter);
}
