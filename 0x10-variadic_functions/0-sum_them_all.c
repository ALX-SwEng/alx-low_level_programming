#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* sum_them_all - compute sum of all its parameters.
*
* @n: number of parameters passed to function.
*
* Return: sum, fail otherwise.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n); /* Initialize the argument list. */

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);    /* Get the next argument value. */

	va_end(list); /* Clean up argument list. */

return (sum);
}
