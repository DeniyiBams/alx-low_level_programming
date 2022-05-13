#include <stdio.h>
#include <stdlib.h>

/**
 * main - generates opcodes.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: the opcodes
 */

int main(int argc, char **argv)
{
	int i, numb;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	numb = atoi(argv[1]);
	if (numb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < numb; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i == (numb - 1))
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
