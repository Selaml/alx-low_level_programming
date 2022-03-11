#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter, letter1;

	for (letter = 'a'; letter <= 'z'; letter++)
	for (letter1 = 'A'; letter1 <= 'Z'; letter1++)
		putchar(letter);
		putchar(letter1);

	return (0);
}
