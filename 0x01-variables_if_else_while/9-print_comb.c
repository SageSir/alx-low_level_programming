#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
