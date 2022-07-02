#include <stdio.h>

/**
* main - Entry point
* This program prints every letter of the alphabet
* in reverse order
* Return: 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 122; a > 96; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
