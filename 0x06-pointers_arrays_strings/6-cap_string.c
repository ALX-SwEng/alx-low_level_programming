/**
 * cap_string - capitalizes all words of a string.
 * @str: string pointer
 *
 * Return: string capitalized string.
 */
char *cap_string(char *str)
{
	int i = 0;
	char s1, s2;

	while (*(str + i) != '\0')
	{
		s1 = *(str + i);
		s2 = *(str + i - 1);

		if (s1 >= 'a' && s1 <= 'z')
		{
			if (s2 == ' ' || s2 == '\t' || s2 == '\n' || s2 == ','
			    || s2 == ';' || s2 == '.' || s2 == '!' || s2 == '\?'
			    || s2 == '\"' || s2 == '(' || s2 == ')' || s2 == '{'
			    || s2 == '}')
				*(str + i) = s1 - 32;
    	}
		i++;
	}
	return (str);
}
