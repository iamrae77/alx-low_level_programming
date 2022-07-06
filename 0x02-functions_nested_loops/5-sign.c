#include "main.h"

/**
* print_sign - prints the sign of a number.
* @n: the character to print
* Return: 0, 1 or -1
*/
int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		num = 0;
		_putchar('0');
	}
	else
	{
		num = -1;
		_putchar('-');
	}
	return (num);
}
