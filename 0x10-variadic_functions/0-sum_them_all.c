#include <stdarg.h>
#include <stdio.h>

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
	int i, sum;

	if (n == 0)
		return (0);

	va_start(list, count); /* Initialize the argument list. */

	sum = 0;

	for (i = 0; i < count; i++)
		sum += va_arg(ap, int);    /* Get the next argument value. */

	va_end(ap); /* Clean up argument list. */

return (sum);
}
