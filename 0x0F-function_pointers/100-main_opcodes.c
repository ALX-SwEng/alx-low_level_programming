#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	
	if (argc < 0)
	{
		printf("Error\n");
		exit(2);
	}

	

return (0);
}
