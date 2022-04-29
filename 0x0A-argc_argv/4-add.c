#include <stdio.h>
#include <stdlib.h>

/**
* main - prints name name of program.
* @argc: number of command line arguments
* @argv: An array containing the program command line arguments
*
* Return: Always success.
*/

int main(int argc, char *argv[])
{
	int i, sum = 0, count = 0;

	if (argc - 1 > 0)
	{
		for (i = 1; i < argc; ++i)
		{
			if (!isnumber(argv[i]))
				++count;
			else
				sum += atoi (argv[i]);
		}
	}

	if (argc - 1 == 0 || count == argc - 1)
		printf("0\n");

	else if (count > 1)
	{
		printf("Error\n");
		return (1)
	}
	
	else		 
		printf("%d\n", sum);

return (0);
}
