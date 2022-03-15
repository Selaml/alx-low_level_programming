#include "main.h"

/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */
int _islower(int c)
{
	char l;


	for (l = 'a'; l <= 'z'; l++);)
	{
		if ( _putchar(l))
		{
			 _putchar('1');
		}
		else
		{
			 _putchar('0');
		}
}

