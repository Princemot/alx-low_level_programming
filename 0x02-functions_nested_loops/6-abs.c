#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @p: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */
int _abs(int p)
{
	if (p < 0)
	{
		int abs_val;

		abs_val = p * -1;

		return (abs_val);
	}

	return (p);
}
