#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: void
 */
void print_alphabet(void)
{
	int letter;
	for(letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
