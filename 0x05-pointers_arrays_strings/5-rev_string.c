#include "main.h"

/**
* rev_string - function
* Authored By Kweku Ammuako-Annan
* @s: pointer of parameter
*/

void rev_string(char *s)
{
	char tmp;
	int lgth = 0;
	int b = 0;
	int e;

	while (s[lgth] != '\0')
		lgth++;
	e = lgth - 1;
	lgth /= 2;
	while (lgth--)
	{
		tmp = s[b];
		s[b] = s[e];
		s[e] = tmp;
		b++;
		e--;
	}
}
