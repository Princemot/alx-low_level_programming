#include "main.h"

/**
 * _puts - Prints a string to add to new line stdout.
 * @str: The string to be printed to output.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
