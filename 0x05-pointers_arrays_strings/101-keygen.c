#include "main.h"

#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
* main - generates random passwords for 101-crackme
* Return: zero
*/

int main(void)
{
	int total;
	char x;

	srand(time(NULL));
	while (total <= 2645)
	{
		x = rand() % 128;
		total += x;
		putchar(x);
	}
	putchar(2772 - total);
	return (0);
}
