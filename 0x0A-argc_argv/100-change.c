#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int number, x, final;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	number = atoi(argv[1]);
	final = 0;
	if (number < 0)
	{
	printf("0\n");
	return (0);
	}
	for (x = 0; x < 5 && number >= 0; x++)
	{
	while (number >= coins[x])
	{
	final++;
	number -= coins[x];
	}
	}
	printf("%d\n", final);
	return (0);
}
