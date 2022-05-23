#include <unistd.h>

/**
 * _putchar - output a char to stdout
 * @c: the character to be displyed
 * Return: returns 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
