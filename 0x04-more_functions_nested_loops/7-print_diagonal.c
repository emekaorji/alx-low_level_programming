#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n: the amount of line to span
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int s;

	if(n > 0)
		for(i = 0; i < n; i++)
		{
			for(s = 0; s < i; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
