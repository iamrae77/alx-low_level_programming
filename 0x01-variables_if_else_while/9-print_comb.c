#include <stdio.h>

/**
* main - Entry point
* This program prints comma-separated digits
* Return: 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(10);
		}
	}
	return (0);
}
