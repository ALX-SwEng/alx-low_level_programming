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
	int (*func)(int, int);

	if (argc - 1 != 3)
	{
		printf("Error1\n");
		exit(98);
	}

	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' &&
	    *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error2\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] != '/' || *argv[2] != '%') && num2 == 0)
	{
		printf("Error3\n");
		exit(100);
	}

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error4\n");
		exit(99);
	}
	printf("%d\n", func (num1, num2));

return (0);
}
