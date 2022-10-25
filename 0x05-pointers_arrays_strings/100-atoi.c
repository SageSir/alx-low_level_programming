#include "main.h"

/**
* _atoi - Convert a string to integer.
* @s: char array string
* Return: first integer found in string
*/

int _atoi(char *s)
{
	int j;
	int k, l;

	k = 0;
	l = -1;
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == '-')
			l *= -1;
		if (s[j] > 47 && s[j] < 58)
		{
			if (k < 0)
				k = (k * 10) - (s[j] - '0');
			else
				k = (s[j] - '0') * -1;

			if (s[j + 1] < 48 || s[j + 1] > 57)
				break;
		}
	}
	if (l < 0)
		k *= -1;
	return (k);
}
