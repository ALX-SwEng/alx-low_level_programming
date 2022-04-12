#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0.
 *
 * Return: none.
 */
void times_table(void)
{
    int i;
    
    for (i = 1; i <= 10; ++i)
        _putchar ('0');
    for (i = 1; i <= 9; ++i)
    {
        _putchar('0');
        int j;
        
        for (j = i; j <= 9; ++j)
            putchar(i * j);
    }
}
