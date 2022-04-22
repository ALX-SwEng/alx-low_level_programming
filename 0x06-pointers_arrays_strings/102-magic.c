#include <stdio.h>

/**
 * main - pointers arithmetic
 *
 * Return: Always 0.
 */
int main(void)
{
   int *p;
   int a[2];
   int n;

   p = &n;
   printf("p = &n;\np: %p\n", p);
   printf("p + 1: %p\n", p + 5);
   /* possible since a is evaluated */
   /* as an int * in this context */
   p = a;
   printf("\na: %p\na +2: %p\n", a, a +2);
   return (0);
}
