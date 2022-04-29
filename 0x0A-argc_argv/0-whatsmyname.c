#include <stdio.h>

/**
* main - prints name name of program.
* @argc: number of command line arguments
* @argv: An array containing the program command line arguments
*
* Return: Always success.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%s\n", argv[0]);

return (0);
}