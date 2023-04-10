#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two positive numbers
 * @argc: number of arguments
 * @argv: contains command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, a, b, c;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		c = atoi(argv[a]);
		sum += c;
	}
	printf("%d\n", sum);
	return (0);
}
