#include "main.h"

/**
* main - check code
*
* Return: 0
*/
int main(void)
{
	print_most_numbers();
		return (0);
}

/**
* print_most_numbers - Prints the numbers
* 1 through 9 excluding 2 & 4
* Return: void
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar(10);
}
