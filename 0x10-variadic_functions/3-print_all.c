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
	while (format && format[j] != '\0')
	{
		if (start == 1)
		{
			switch (format[j])
			{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				printf(", "); }
		}
		start = 1;
		switch (format[j++])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case's':
			if (str = va_arg(list, char*))
			{
			printf("%s", str);
			break; }
			printf("(nill)");
			break; }}
	va_end(list); /* Clean up argument list. */
	printf("\n");
}
