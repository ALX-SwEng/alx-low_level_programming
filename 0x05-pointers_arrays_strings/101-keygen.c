#include <stdio.h>
#include <stdlib.h>  
#include <time.h>

/*
* main - generate random password
*
* Return: Always success.
*/

int main()
{
	int i, sum = 0, n;
	int pass[100];

    srand(time(NULL));    

    for (i = 0; i < 100; i++) 
    {
        pass[i] = rand() % 78;

		sum += (pass[i] + '0');
		putchar(pass[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
    }
    printf("\n");
    
    return (0);
}
