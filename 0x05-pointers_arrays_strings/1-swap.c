#include "main.h"

/**
 * swap_int - to swap two numbers.
 * @a: The first number.
 * @b: The second number.
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
