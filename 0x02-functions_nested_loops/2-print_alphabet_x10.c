/*
 * File: 2-print_alphabet_x10.c
 * Auth: L K
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	char letter;
	int i=1;
	for (i = 1; i <= 10; i++)
	{
	    for (letter = 'a'; letter <= 'z'; letter++)
		{
			 _putchar(letter);
		}
		 _putchar('\n');
	}
}
