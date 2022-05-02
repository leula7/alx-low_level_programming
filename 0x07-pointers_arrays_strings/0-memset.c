/*
 * File: 0-memset.c
 * Auth: Leul K
 */

#include "main.h"

/**
<<<<<<< HEAD
 * memset - Fills the first n bytes of the memory area
=======
 * _memset - Fills the first n bytes of the memory area
>>>>>>> f6bb656049c067230b082b034eb74f5121233275
 *          pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
<<<<<<< HEAD

=======
>>>>>>> f6bb656049c067230b082b034eb74f5121233275
	return (memory);
}
