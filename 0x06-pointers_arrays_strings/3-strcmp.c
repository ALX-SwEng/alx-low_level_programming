/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: string pointer.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, flag = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
    {
      flag = -15;
      break;
    }
    else if (s1[i] > s2[i])
    {
			flag = 15;
      break;
    }
		i++;
	}
  
  return (flag);
}
