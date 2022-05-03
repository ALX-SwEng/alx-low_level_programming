#include <stdlib.h>

/**
 * argstostr - concatenate command line arguments.
 *
 * @ac: count of command line arguments
 * @av: vector of command line arguments
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len, argsLen = 0;
	char *str, *temp;

	if (!ac || av ==  NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		temp = av[i];

		while (*temp++ != '\0')
			len++;

		argsLen += ++len;
	}

	str = malloc(sizeof(char) * argsLen + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		temp = av[i];
		while (*temp++ != '\0')
			len++;

		for (j = 0; j < len; j++, k++)
			str[k] = av[i][j];
		str[k++] = '\n';
	}

	str[k] = '\0';
	return (str);
}
