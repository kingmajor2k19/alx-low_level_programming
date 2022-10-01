#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: array of pointers to argument strings
 *
 * Return: always 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
