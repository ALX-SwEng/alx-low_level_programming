#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* isNumber - check if string is number.
* @str: string parameter
*
* Return: 1 if number otherwise 0.
*/

int isNumber(char *str)
{
	int j = strlen(str);

	while (j--)
	{
		if (str[j] > 47 && str[j] < 58)
			continue;
		return (0);
	}
return (1);
}

/**
* main - multiplies two numbers recieved through command line.
* @argc: number of command line arguments
* @argv: An array containing the program command line arguments
*
* Return: 0 if success otherwise 1.
*/

int main(int argc, char *argv[])
{
	int i;
	unsigned long long mul;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; ++i)
	{
		if (!isNumber(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);

return (0);
}
