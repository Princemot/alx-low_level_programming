#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @z: The number to begin counting at.
 * for the final value to be at the output
 */
void print_to_98(int z)
{
	if (z >= 98)
	{
		while (z > 98)
			printf("%d, ", z--);
		printf("%d\n", z);
	}

	else
	{
		while (z < 98)
			printf("%d, ", z++);
		printf("%d\n", z);
	}
}
