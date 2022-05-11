#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @name: string param
 * @f: pointer to function
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
  f(name);
}
