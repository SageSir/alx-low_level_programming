#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string to search
* @accept: stringcontaining the bytes to look for
* Return: pointer to the byte in s that matches one of the bytes in accept
* or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0;  *(accept + a) != 0; a++)
		{
			if (*s == *(accept + a))
				return (s);
		}
		s++;
	}
	return (0);
}
