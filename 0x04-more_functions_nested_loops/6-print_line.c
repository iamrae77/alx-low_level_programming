#include "main.h"

/**
* print_line - prints line of underscores
* @n: number of times to print underscores
* Return: void
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
		if (n <	1)
			_putchar(10);
	}
	_putchar(10);
}
