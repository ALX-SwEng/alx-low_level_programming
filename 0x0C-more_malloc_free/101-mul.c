#include <stdio.h>
#include <stdlib.h>

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
	if (argc - 1 != 2)
	{
		printf("Error\n");
		exit(98);
	}

  	for (i = 1; i < argc; ++i)
	{
		if (!isNumber(argv[i]))
			++count;
	}
	
	if (count > 0)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}
