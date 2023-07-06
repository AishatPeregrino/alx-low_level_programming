#include "main.h"

/**
 * If the least significant byte is stored at the lowest address,
 * It means the system is little endian.
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
