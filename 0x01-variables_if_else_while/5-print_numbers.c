#include <stdio.h>

/**
* main - Entry point
* This program prints every decimal digit
* Return: 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
