#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything.
* @format: a list of types of arguments passed to the function.
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int j = 0;
	char *str, *sep = "";

	va_start(list, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
			case 'c':
				printf("%s%c", sep, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				j++;
				continue;
			}
			sep = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(list); /* Clean up argument list. */
}
