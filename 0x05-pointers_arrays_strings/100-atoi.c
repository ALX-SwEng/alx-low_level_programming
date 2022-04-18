#include "main.h"
/**
 * _atoi -  convert a string to an integer.
 * @s: string
 *
 * Return: if no number in the string 0 otherwise the number.
 */
int _atoi(char *s)
{
	int len = 0, num = 0, found = 0;
	char sign, c;

	while (*(s + len) != '\0')
	{
	    if (*(s + len) >= '0' && *(s + len) <= '9')
	    {
	    	found = 1;
		if (*(s + len) == '0')
			num = num * 10;
		else if (*(s + len) == '1')
		       	num = (num * 10) + 1;
	        else if (*(s + len) == '2')
		       	num = (num * 10) + 2;
	        else if (*(s + len) == '3')
			num = (num * 10) + 3;
		else if (*(s + len) == '4')
			num = (num * 10) + 4;
		else if (*(s + len) == '5')
			num = (num * 10) + 5;
		else if (*(s + len) == '6')
			num = (num * 10) + 6;
		else if (*(s + len) == '7')
		   	num = (num * 10) + 7;
		else if (*(s + len) == '8')
		   	num = (num * 10) + 8;
		else if (*(s + len) == '9')
		  	num = (num * 10) + 9;

		c = *(s + len - 1);
		if (c == '-' || c == '+')
			sign = c;
		c = *(s + len + 1);
		if (!(c >= '0' &&  c <= '9'))
			break;
		}
		++len; }
	if (found == 1 && sign == '-')
		num = -1 * num;
return (num); }
