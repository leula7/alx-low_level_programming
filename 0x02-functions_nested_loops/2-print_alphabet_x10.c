/*
 * File: 1-alphabet.c
 * Auth : Lk
 */

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i=1;
	for(i=1; i<=10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	}
	_putchar('\n');
}
