#include "main.h"
/**
 * clear_bit - set the value of a provided bit to 0
 * @n: points to the desired number to change
 * @index: index of the bit to clear on the program
 *
 * Return: 1 for success, -1 for failure in executing
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
