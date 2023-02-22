#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci series
  * less than 4000000.
  *
  * Return: Nothing!
  */
int main(void)
{
	int x = 0;
	long j = 1, p = 2, sum = p;

	while (p + j < 4000000)
	{
		p += j;

		if (p % 2 == 0)
			sum += p;

		j = p - j;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}
