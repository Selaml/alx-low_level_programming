#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	for (letter = 0 ;letter <= 10 ; letter++)
		_putchar(letter);

	_putchar('\n');
}
