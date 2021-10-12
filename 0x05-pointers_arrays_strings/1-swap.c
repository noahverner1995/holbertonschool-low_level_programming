#include "main.h"

/**
 * swap_int - Swap the values of 2 integers
 *
 * @a: Pointer of integer variable
 * @b: Pointer of integer variable
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;

*a = *b;
*b = temp;
}
