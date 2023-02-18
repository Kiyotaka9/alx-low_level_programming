#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int d;

	int c;

	for (d = '0'; d < '9'; d++)
	{

	for (c = d + 1; c <= '9'; c++)
	{
	if (c != d)
	{
	putchar(d);
	putchar(c);
	if (d == '8' && c == '9')
	continue;
	putchar(',');
	putchar(c);
	}
	}
	}
	putchar('\n');
	return (0);
}
