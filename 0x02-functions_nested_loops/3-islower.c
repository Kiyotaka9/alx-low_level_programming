#include "main.h"

/**
  * _islower - function that checks for lowercase character
  * @c: The character that is to be checked
  * Return: 1 for the lowercase character or 0 for anything else
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
}
