#include "main.h"

/**
 * main - main function
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char string[8] = "_putchar";
	int n = 0;

	while (n < 8)
	{
		_putchar(string[n]);
		++n;
	}

	_putchar(10);
	return (0);
}
