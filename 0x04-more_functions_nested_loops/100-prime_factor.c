#include <stdio.h>

/**
 * main - print prime factor of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 2, prime, j, flag = 0;
	
	while (i <= 612852475143/2)
	{
		if (612852475143 % i == 0)
		{
			for(j = 2 ; j < i / 2 ; j++) 
			{
		      	if(i % j == 0) 
				{			
				flag = 1;
		        break;
		      	}
		    }
		    if (flag == 0)
		    	prime = i;
		}
	    ++i;
   }
	printf("%d", prime);
    return (0);
}

