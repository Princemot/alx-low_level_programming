#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the character c on the standard output
 * @c: The character to print on the terminal
 *
 * Return: On success 1. on the point  of exit
 * On error, -1 is returned, and errno is set appropriately for execution.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
