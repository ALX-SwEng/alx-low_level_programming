/**
 * _puts -   prints a string, followed by a new line, to stdout.
 * @str: string
 *
 * Return: nothing
 */
 
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		putchar(*(str + len) );
		++len;
	}
}
