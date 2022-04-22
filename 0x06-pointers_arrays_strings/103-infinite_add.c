/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i, j = 0;
	char temp;

	for (i = -1; *(n + i) != '\0'; i++)

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i, j, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	for (i = -1; *(n1 + i) != '\0'; ++i)
	for (j = -1; *(n2 + j) != '\0'; ++j)

	if (j >= size_r || i >= size_r)
		return (0);

	while (j >= 0 || i >= 0 || overflow == 1)
	{
		val1 = *(n1 + i) - '0';
		val2 = *(n2 + j) - '0';

		temp_tot = val1 + val2 + overflow;

		if (temp_tot >= 10)
		{
			overflow = 1;
			temp_tot %= 10;
		}
		else
			overflow = 0;

		if (digits >= (size_r - 1))
			return (0);

		*(r + digits) = (temp_tot + '0');

		digits++;
		j--;
		i--;
	}

	if (digits == size_r)
		return (0);

	*(r + digits) = '\0';
	rev_string(r);

	return (r);
}
