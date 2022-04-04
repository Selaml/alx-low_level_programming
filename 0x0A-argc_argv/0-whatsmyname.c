#include <stdio.h>

/*
 * File: 0-whatsmyname.c
 * Auth: Selamawit G
 */

int main(int argc, char* argv[])
{
	int i;

	for(i = 0 ; i < argc ; i++)
	{
		printf("%s\n" ,argv[i]);
	}
	return (0);
}
