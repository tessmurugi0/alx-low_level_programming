#include <stdio.h>
/**
 * main - prints all arguments
 * argc - counts arguments
 * argv - arrays of pointers
 */
int main(int argc, char **argv)
{
	int count = 0;

	while(count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
