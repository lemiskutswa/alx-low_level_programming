#include "holberton.h"
/**
 * print_line - function that checks for uppercase character.
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */
void print_line(int n)
{
	int a = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
