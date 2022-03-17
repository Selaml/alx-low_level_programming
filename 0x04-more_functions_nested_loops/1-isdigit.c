#include "main.h"

/**
  * _isdigit - checks for a digit
  * @c: The number to be checked
  * Return: 1 for digit or 0 for any else
  */
int _isdigit(int c)
{
	if (c >= 0 && c < 10)
	{
		return (1);
	}

	return (0);
}
