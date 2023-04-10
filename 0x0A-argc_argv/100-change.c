#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - make a change for an amount of money
*@argc: number of arguments
*@argv: Array
*Return: always 0
*/
int main(int argc, char *argv[])
{
	int n, cents, coin = 0;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	for (n = 0; cents > 0; n++)
	{
		coin += cents / change[n];
		cents = cents % change[n];
	}
	printf("%d\n", coin);
	return (0);
}
