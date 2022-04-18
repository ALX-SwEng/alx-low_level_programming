#include "main.h"
/**
 * _atoi -  convert a string to an integer.
 * @s: string
 *
 * Return: if no number in the string 0 otherwise the number.
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int len = 0, digit, found = 0;
	char sign, c1, c2;

	while (*(s + len) != '\0')
	{
		c1 = *(s + len);
		c2 = *(s + len + 1);
		if (c1 == ' ')
		{
			++len;
			continue; }
		if (c1 == '-')
		{
			if ((c2 >= '0' && c2 <= '9') || c2 == ' ' || c2 == '-' || c2 == '+')
			{
				if (sign == '-')
					sign = ' ';
				else
					sign = '-';
			}}
		if (c1 >= '0' && c1 <= '9')
		{
			found = 1;
			digit = 0;
			while (digit <= 9)
			{
				if (*(s + len) == digit + '0')
					num = (num * 10) + digit;
				++digit;
			}
			if (!(c2 >= '0' &&  c2 <= '9'))
				break;
			}
			++len;
		}
		if (found == 1 && sign == '-')
			num = -1 * num;
	return (num);
}
