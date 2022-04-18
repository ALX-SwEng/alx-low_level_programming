/**
 * _strlen -  returns the length of a string.
 * @s: string
 *
 * Return: string len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		++len;

	return (len);
}
