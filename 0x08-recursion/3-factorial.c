#include "main.h"

/**
* factorial - returns the factorial of a number
* @n: the given number
* Return: -1 on error
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
			return (n);
	}
}
