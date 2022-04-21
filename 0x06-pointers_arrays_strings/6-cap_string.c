/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string pointer
 *
 * Return: string in uppercase.
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
