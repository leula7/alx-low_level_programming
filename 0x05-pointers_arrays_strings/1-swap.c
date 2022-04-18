#include "main.h"

/**
 * main - check the code
 * a is the first number
 * b is the second number
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
