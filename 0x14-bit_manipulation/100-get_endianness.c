#include "main.h"

/**
 * get_endianness - used to check for endianness
 * If the least significant byte is stored at the lowest address,
 * it means the system is little endian.
*/

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
