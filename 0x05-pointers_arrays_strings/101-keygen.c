#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
        pass[i] = rand() % 19;

		sum += (pass[i] + '0');
		putchar(pass[i] + '0');

		if ((5050 - sum) - '0' < 19)
		{
			n = 5050 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
    }
    printf("\n");
    
    return (0);
}
