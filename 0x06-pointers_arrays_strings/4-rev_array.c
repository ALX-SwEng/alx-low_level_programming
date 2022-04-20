/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integer
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	--n;
	while (n > i)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		++i;
		--n;
	}
}
