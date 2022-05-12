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
	int j = 0, start = 0;
	char *str;

	va_start(list, format);
	while (format[j])
	{
		switch (format[j])
		{
		case 'c':
			switch (start) 
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			switch (start) 
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			switch (start) 
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(list, double));
			break;
		case's':
			switch (start) 
			{ case 1: printf(", "); }
			start = 1;
			str = va_arg(list, char*);
			if (str)
				printf("%s", str);
			break;
			printf("(nill)");
			break;
		}
		++j;
	}
	va_end(list); /* Clean up argument list. */
	printf("\n");
}
