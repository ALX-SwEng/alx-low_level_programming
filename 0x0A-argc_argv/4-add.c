#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* isNumber - check if string is number.
* @str: string parameter
*
* Return: 0 if number otherwise 0.
*/

int isNumber(char *str)
{
    int j = strlen(str);

    while(j--)
    {
        if(str[j] > 47 && str[j] < 58)
            continue;
        return 0;
    }
    return 1;
}

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
				sum += atoi(argv[i]);
		}
	}

	if (argc - 1 == 0 || count == argc - 1)
		printf("0\n");

	else if (count > 1)
	{
		printf("Error\n");
		return (1);
	}

	else
		printf("%d\n", sum);

return (0);
}
