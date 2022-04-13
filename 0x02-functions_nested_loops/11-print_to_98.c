#include "main.h"

/**
 * main - prints all natural numbers from n to 98
 *@n: integer number
 *
 * Return: nothing.
 */
void print_to_98(int n)
{
    while (n != 98)
	{
		int sign = 0;
		int temp = n, reverse = 0, len = 0;;
		
	    if (n < 0)
	    {
	    	temp = -1 * n;
	    	sign = 1;
		}
	    
		if (temp == 0)
			len = 1;
		    
	    while (temp > 0)
	    {
	        reverse = (reverse * 10) + (temp % 10);
	        temp = temp / 10;
	        len++;
	    }
	
		if (sign == 1)
			putchar('-');
	
	    while (len > 0)
	    {
	        putchar (reverse % 10 + '0');
	        reverse = reverse / 10;
	        len--;
	    }
	    
        putchar (','); 
		putchar (' ');
	
		if (n > 98)					
			--n;  
	    else
	    	++n;
	}
	putchar (9 + '0'); 
	putchar (8 + '0');
}
