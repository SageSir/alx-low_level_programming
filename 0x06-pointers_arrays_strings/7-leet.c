#include "main.h"

/**
* leet - encodes a string in 1337
* @s: string to be encoded
* Return: the resulting string;
*/

char *leet(char *s)
{
	int a = 0, b, uc = 0;
	int lc[5] = {97, 101, 111, 116, 108};
	int code[5] = {4, 3, 0, 7, 1};

	while (*(s + a))
	{
		for (b = 0; b < 5; b++)
		{
			uc = lc[b] - 32;
			if (s[a] == lc[b] || s[a] == uc)
			{
				s[a] = code[b] + 48;
			}
		}
		a++;
	}
	return (s);
}
