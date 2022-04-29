#include <stdio.h>

/**
* main -  prints all arguments recieved through command line.
* @argc: number of command line arguments
* @argv: An array containing the program command line arguments
*
* Return: Always success.
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; ++i)
			printf("%s\n", argv[i]);
	}

return (0);
}
