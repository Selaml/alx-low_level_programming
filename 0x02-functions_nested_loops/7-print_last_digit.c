#include "main.h"

/**
  * int print_last_digit -prints the last digit of a number.
  *
  * Return: Absolute value of number or zero
  */
int print_last_digit(int n)
{
	int last;

        last = n % 10;
	_putchar(last);
	return (last);
}
