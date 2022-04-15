#include <stdio.h>

/**
 * main - print prime factor of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	int unsigned long long num = 612852475143, i = 1, prime;
	int j, flag = 0;
	
	while (i <= num)
	{
		if (num % i == 0)
		{
			printf("not\n");
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
