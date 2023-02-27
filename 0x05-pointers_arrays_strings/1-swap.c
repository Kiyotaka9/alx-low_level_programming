#include <stdio.h>

/**
  * swap_int - swaps the value of the two integers
  * @a: the first integer to be swapped
  * @b: The second integer to be swapped
  * Return: 0
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
