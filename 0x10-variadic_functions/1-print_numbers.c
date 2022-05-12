#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line.
*
* @separator: the string to be printed between numbers.
* @n: number of integers passed to the function.
*
* Return: Nothing.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n != 0)
	{
		va_start(list, n); /* Initialize the argument list. */

		for (i = 0; i < n - 1; i++)
		{
			printf("%d", va_arg(list, int)); /* Get & print the next argument value. */
			if (separator)
				printf("%s", separator);
		}
		printf("%d", va_arg(list, int)); /* print last argument value */

		va_end(list); /* Clean up argument list. */
	}
printf("\n");
}
