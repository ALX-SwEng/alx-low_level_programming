#include "main.h"

/**
 * main - prints all natural numbers from n to 98
 *@n: integer number
 *
 * Return: nothing.
 */
void print_to_98(int n)
{
    if (n < 98)
    {
        while (n <= 98)
        {
            _putchar (n);
            ++n;
        }
    }
    else
    {
        while (n >= 98)
        {
            _putchar (n);
            --n;
        }
    }
     _putchar ('\n');
}
