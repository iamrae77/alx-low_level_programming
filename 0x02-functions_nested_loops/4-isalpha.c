#include "main.h"

/**
* _isalpha - checks for an alphabet
* @c: The character to print
* Return: 1 or 0
*/
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
