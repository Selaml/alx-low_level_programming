#include "main.h"

/**
  * print_most_numbers- Check if a character is a digit
  * @n: The number to be checked
  *
  * Return: 1 for a character that will be a digit or 0 for any else
  */
void print_numbers(void)
{
	int n;

	for (n >= 48; n <= 57; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
