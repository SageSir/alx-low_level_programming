#include "main.h"

/**
* swap_int - function
* Authored by Kweku Ammuako-Annan
* @a: pointer of parameter
* @b: pointer of parameter
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = (*a);
	(*a) = (*b);
	(*b) = temp;
}
