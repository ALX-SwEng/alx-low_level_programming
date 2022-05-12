#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_all - prints anything.
* @format: a list of types of arguments passed to the function.
* Return: Nothing.
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int start = 0;
	char *str;

	if (format)
	{
		while (*format)
		{
			switch (start)
			{
			case 1:
			printf(", ");
			}
			start = 1;
			switch (*format)
			{
			case 'c':
			printf("%c", va_arg(list, int));
			break;
			case 'i':
			printf("%i", va_arg(list, int));
			break;
			case 'f':
			printf("%f", va_arg(list, float));
			break;
			case's':
			str = va_arg(list, char*);
			if (str)
				printf("%s", p);
			break;
			printf("(nill)");
			break;
			}
			++format;
		}

	va_end(list); /* Clean up argument list. */
	printf("\n");
}
