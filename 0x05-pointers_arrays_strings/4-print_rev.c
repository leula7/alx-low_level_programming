/*
 * File: 4-print_rev.c
 * Auth: Leul K
 */

#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int len = 0, index;
{
len = strlen(s);
}
{
for (index = len - 1; index >= 0; index--)
_putchar(s[index]);
}
_putchar('\n');
}
