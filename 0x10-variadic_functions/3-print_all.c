#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - prints anything.
* @format: a list of types of arguments passed to the function.
*/
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int j = 0;
	char *str, *sep = "";

	va_start(list, format);
	if (format)
	{
		while (format[j] != '\0')
		{
			switch (format[j])
			{
			case 'c':
				printf("%s%c", sep, va_arg(list, int));
				break;
			case 'i':
				printf("%s%i", sep, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(list, double));
				break;
			case's':
				str = va_arg(list, char*);
				if (!str)
					str = "(nill)";
				printf("%s%s", sep, str);
				break; 
			}
			sep = ", ";
			j++;
		}
	}
	va_end(list); /* Clean up argument list. */
	printf("\n");
}
