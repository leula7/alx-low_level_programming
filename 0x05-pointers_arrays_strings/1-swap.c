#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
  int *temp = 0;
  *temp =  b;
  *b = a;
  *a = temp;
}
