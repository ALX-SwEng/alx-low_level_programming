#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - prints anything.
*
* @format: a list of types of arguments passed to the function.
*
* Return: Nothing.
*/

void print_all(const char * const format, ...)
{
	va_list list;
	int i;
	float j;
	char s;
	char *str;

	va_start(list, format);
	while (*format)
	{
		if (*format == 'd')
		{
			i = va_arg(list, int);
			printf("%d", i);
		}

		else if (*format == 'd')
		{
			j = va_arg(list, float);
			printf("%f", j);
		}

		else if (*format == 'c')
		{
			s = va_arg(list, char);
			printf("%c", s);
		}

		else if (*format == 's')
		{
			str = va_arg(list, char*);
			if (str)
				printf("%s", str);
			else if (!str)
				printf("(nil)");
		}
		printf(", ");
	}

	va_end(list); /* Clean up argument list. */
	printf("\n");
}
