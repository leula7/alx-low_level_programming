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
	printf("Size of a char: %d\n Size of an int: %d\n Size of a long int: %d\n Size of a long long int: %d\n Size of a float: %d\n",sizeof(char),sizeof(int),sizeof(long),sizeof(long),sizeof(float));

        return (0);
}

