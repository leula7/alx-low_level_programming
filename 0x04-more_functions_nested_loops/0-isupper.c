#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(c)
{

    int i = c;

    if(i <= 90 && i >= 65)
    {
       return (1);
    }
    else if(i >= 97 && i <= 122)
    {
            return (0);
    }
}
