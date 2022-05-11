#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - validate input number and operator
 *
 * @argc: number of command line arguments
 * @argv: An array containing the program command line arguments
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

	get_op_func(argv[2], num1, num2);

return (0);
}
