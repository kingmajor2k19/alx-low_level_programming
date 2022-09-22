#include "main.h"
/**
 *print_number - prints an integer.
 *only using the putchar function.
 *noarrays and pointers.
 *@n: integer to be printed.
 *Return: void.
 */
void print_number(int n)
{
	unsigned int num = n;
/*check if number is negative*/
	if (n < 0)
	{
		_putchar('_');
		num = -n;
	}
/* print number by recursion*/
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
