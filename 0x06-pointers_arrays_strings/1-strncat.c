#include "main.h"

/**
* _strncat - concatenates n bytes from a string to another
* @dest: destination string
* @src: source string
* @n: number of bytes of str to concatenate
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a])
	{
		a++;
	}
	while (b < n && src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = 0;
	return (dest);
}
