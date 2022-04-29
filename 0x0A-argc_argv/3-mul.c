#include <stdio.h>
#include <stdlib.h>

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
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}
