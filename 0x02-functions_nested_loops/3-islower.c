#include "main.h"

/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */
int _islower(int c)
{

	for (c = 'a'; c <= 'z'; c++)
	{
		if ( _putchar(c))
		{
			 _putchar('1');
		}
		else
		{
			 _putchar('0');
		}
}

