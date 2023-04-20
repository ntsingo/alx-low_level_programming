#include "main.h"
#include <stdio.h>
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		if (xor_result & 1)
			nbits++;
		xor_result >>= 1;
	}

	return (nbits);
}
