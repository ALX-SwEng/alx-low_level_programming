#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* main - chech if a number is possitive, negative, or zero 
* RETURN: the function returns 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	return (0);
}
