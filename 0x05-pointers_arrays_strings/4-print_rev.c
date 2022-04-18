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
strrev(s);
puts(s);	
}
