#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1 && argc < 4)
	{
		for (i = 1 ; i < argc ; i++)
		mul = mul * atoi(argv[i]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
