#include "main.h"

/**
  * print_most_numbers- Check if a character is a digit
  * @n: The number to be checked
  *
  * Return: 1 for a character that will be a digit or 0 for any else
  */
void print_most_numbers(void)
{
	int n;

	for (n >= 0; n <= 10; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
