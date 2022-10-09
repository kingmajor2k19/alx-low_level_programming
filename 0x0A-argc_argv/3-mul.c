#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: array of pointers to argument strings
 * Return: result of multiplication or 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

/* atoi converts a string to an integer */

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
