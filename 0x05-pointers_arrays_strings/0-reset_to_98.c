#include "main.h"


/**
 * reset_to_98- check the code
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{	
	int p = 98;

	n = &p;
	_putchar(n + '0');
}	
