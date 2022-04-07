/*
 * File: 4-puts.c
 * Auth: Brennan D Baraban <375@holbertonschool.com>
 */

#include <stdio.h>

/**
 * main - Prints size of various types on the computer
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\nSize of a float: %d byte(s)\n",sizeof(char),sizeof(int),sizeof(long),sizeof(long long),sizeof(float));

        return (0);
}

