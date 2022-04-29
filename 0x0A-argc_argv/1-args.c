#include <stdio.h>

/**
* main - prints the number of arguments passed to command line.
* @argc: number of command line arguments
* @argv: An array containing the program command line arguments
*
* Return: Always success.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

return (0);
}
