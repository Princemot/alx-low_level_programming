#include "main.h"
/**
 * get_endianness - checks if a devices are little or big endian
 * Return: 0 for big, 1 for little time on the program
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
