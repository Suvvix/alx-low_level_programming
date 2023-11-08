#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2;
	char *opus;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	opus = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(opus) == NULL || opus[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opus == '/' && n2 == 0) ||
		(*opus == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opus)(n1, n2));

	return (0);
}

