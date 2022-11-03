#include "main.h"

/**
* flip_bits - function that returns the number of bits you would need to
* flip to get from one number to another.
* @n: How many bit flips are needed to equal m for n
* @m: The number to set other equal
*
* Return: number of bits you flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int last_bit_n, last_bit_m;

	while (n || m)/* loop until both becomes zero */
	{
		/* store the last bits */
		last_bit_n = n & 1;
		last_bit_m = m & 1;

		/* if the current bit is not the same in both ints */
		if (last_bit_n != last_bit_m)
			count++;
		/* Right shift both ints by 1 */
		m = m >> 1;
		n = n >> 1;
	}
	/* Return count */
	return (count);
}
