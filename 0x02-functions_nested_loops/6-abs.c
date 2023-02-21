#include "main.h"

/**
 * _abs - Computes the absolute value of number.
 * @n: of the number to be computed.
 *
 * givies The absolute value of the number.
 */
int _abs(int a)
{
	if (a < 0)
		a *= -1;
	return (a);
}
