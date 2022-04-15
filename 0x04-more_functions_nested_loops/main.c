#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    
    print_number(-4096);
    _putchar('\n');
    print_number(123456789);
    _putchar('\n');

    printf("%d", INT_MIN);
    _putchar('\n');

    printf("%d", INT_MAX);
    _putchar('\n');
    
    return (0);
}
