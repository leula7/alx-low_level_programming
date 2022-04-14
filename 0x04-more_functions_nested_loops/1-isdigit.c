#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _isupper(c)
{

    int i = c;

    if(i>=48 && i<=58)
    {
       return (1);
    }else
    {
             return (0);
    }
}
