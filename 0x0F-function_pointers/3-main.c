#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - validate input number and operator
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc - 1 != 3)
	{
		printf("Error\n");
		exit(98);
	}
	
	if (argv[2] != '+' || *argv[2] != '-' || argv[2] != '*' || 
	    argv[2] != '/' || argv[2] != '%')
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	
	if ((argv[2] != '/' || argv[2] != '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

return (0);
}
