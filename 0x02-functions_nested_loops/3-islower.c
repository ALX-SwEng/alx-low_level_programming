#include "stdio.h"

/**
 * _islower - check lowercase alphabets
 * @c: letter input by user
 * Return: 1 if c is lowercase othrwise 0.
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
