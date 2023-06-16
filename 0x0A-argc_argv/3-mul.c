#include <stdio.h>
#include <stdlib.h>
/**
 * main - mulitipies 2 numbers
 * @argv: array of [ointers
 * @argc: count arguements
 * Return: 1 Fail 0 Succes
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error ");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
}
