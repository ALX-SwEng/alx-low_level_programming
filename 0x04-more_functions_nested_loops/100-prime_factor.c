#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int num = 612852475143;
	long int pr, j, lpr;
	int flag;

	for (pr = 2; pr < num / 2; pr++)
	{
		if (num % pr == 0)
		{
			printf ("%ld\n", num);
			//num = num / pr;
			flag = 0;
			for(j = 2 ; j < pr / 2 ; j++) 
			{
				if(pr % j == 0) 
					flag = 1;
		   	 }
			if (flag == 0)
	   			lpr = pr;
		}
	}
	printf("%ld\n", py);
	return (0);
}

