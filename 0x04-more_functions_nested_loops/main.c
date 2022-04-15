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
    
    print_number(3);
    _putchar('\n');
    print_number(-1);
    _putchar('\n');
    print_number(10);
    _putchar('\n');
    print_number(-99);
    _putchar('\n');
    
    print_number(-4096);
    _putchar('\n');
    print_number(123456789);
    _putchar('\n');
    print_number(INT_MIN);
    _putchar('\n');
    print_number(INT_MAX);
    _putchar('\n');
    
    return (0);
}
