#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* isNumber - check if string is number.
* @str: string parameter
*
* Return: 1 if number otherwise 0.
*/

int isNumber(char *str)
{
	int j = strlen(str);

	while (j--)
	{
		if (str[j] > 47 && str[j] < 58)
			continue;
		return (0);
	}
return (1);
}

/**
  * int_calloc - special calloc for int arrays
  * @nmemb: n memb
  * @size: size of array
  * Return: int *
  */
int *int_calloc(int nmemb, unsigned int size)
{
	int *p, n;
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* malloc the space & check for fail */
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (n = 0; n < nmemb; n++)
		p[n] = 0;

	return (p);
}

/**
  * mult - perform multiplication
  *
  * @product: int pointer for mul answer
  * @n1: num1 as a string param
  * @n2: num2 as a string param
  * @len1: len of num1
  * @len2: len of num2
  *
  * Return: void
  */

void mult(int *product, char *n1, char *n2, int len1, int len2)
{
	int i, j, res1, res2, sum;

	/* the long math */
	for (i = len1 - 1; i >= 0; i--)
	{
		sum = 0;
		res1 = n1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			res2 = n2[j] - '0';
			sum += product[i + j + 1] + (res1 * res2);
			product[i + j + 1] = sum % 10;
			sum /= 10;
		}
		if (sum > 0)
			product[i + j + 1] += sum;
	}
	for (i = 0; product[i] == 0 && i < len1 + len2; i++)
		;
	if (i == len1 + len2)
		_putchar('0');

	for (; i < len1 + len2; i++)
		_putchar(product[i] + '0');
	_putchar('\n');
}

/**
* main - multiplies two numbers recieved through command line.
* @argc: number of command line arguments
* @argv: An array containing the program command line arguments
*
* Return: 0 if success otherwise 1.
*/

int main(int argc, char *argv[])
{
	int *mul, i, j, len1 = 0, len2 = 0;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; ++i)
	{
		if (!isNumber(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
		if (i == 1)
		{
			for (j = 0; argv[i][j]; j++)
				++len1;
		}
		if (i == 2)
		{
			for (j = 0; argv[i][j]; j++)
				++len2;
		}
	}

	mul = int_calloc(len1 + len2, sizeof(int));
	if (mul == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	mult(mul, argv[1], argv[2], len1, len2);
	free(res);

return (0);
}
