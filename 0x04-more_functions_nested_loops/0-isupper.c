#include "main.h"

/**
 * int _isupper- checks for uppercase character.
 * @c: character
 * Return: uppercase character. 
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
