#include "main.h"

/**
 * main - prints every minute of the day of Jack Bauer, 
 * starting from 00:00 to 23:59.
 *
 * Return: none.
 */
void jack_bauer(void)
{
    int n;
    
    for (n = 0; n < 3; ++n)
    {
            int i;
    
            for (i = 0; i < 4; ++i)
            {
                    int j;
                
                    for (j = 0; j < 6; ++j)
                    {
                            int k;
                        
                            for (k = 0; k <= 9; ++k)
                            {
                                    _putchar ('0' + n);
                                    _putchar ('0' + i);
                                    _putchar ('0' + j);
                                    _putchar ('0' + k);
                            }
                    }
            }
    }
}
