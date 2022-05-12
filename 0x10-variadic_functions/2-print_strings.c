#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line.
*
* @separator: the string to be printed between strings.
* @n: number of strings passed to the function.
*
* Return: Nothing.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n != 0)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			if (va_arg(list, char*))
				printf("%s", va_arg(list, char*)); /* Get & print the next value. */
			else
				printf("(nil)");

			if (separator && i + 1 < n)
				printf("%s", separator);
		}

		va_end(list); /* Clean up argument list. */
	}
printf("\n");
}
