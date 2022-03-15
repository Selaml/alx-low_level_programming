#include "holberton.h"

/**
  * print_sign Checks for lowercase character
  * @c: The character to be checked
  *
  * Return: 1 for lowercase character or 0 for anything 
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	_putchar('0')
	return (0);
}
