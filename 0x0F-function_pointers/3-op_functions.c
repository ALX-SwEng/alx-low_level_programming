#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - add two numbers
* @a: 1st number, integer
* @b: 2nd number, integer
*
* Return: sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - find difference of two number
* @a: 1st number, integer
* @b: 2nd number, integer
*
* Return: difference
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiply two number
* @a: 1st number, integer
* @b: 2nd number, integer
*
* Return: product
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divide 1st number by the 2nd
* @a: 1st number, integer
* @b: 2nd number, integer
*
* Return: quotient
*/

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	printf("Error\n");
	exit(100);
}

/**
* op_mod - find reminder
* @a: 1st number, integer
* @b: 2nd number, integer
*
* Return: reminder
*/

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	printf("Error\n");
	exit(100);
}
