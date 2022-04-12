#include "stdio.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
    int i;
    
    for (i = 1; i <= 10; ++)
        _putchar (0);
    for (i = 1; i <= 9; ++i)
    {
        _putchar(0);
        int j;
        
        for (j = i; j <= 9; ++j)
            putchar(i * j);
    }
}
