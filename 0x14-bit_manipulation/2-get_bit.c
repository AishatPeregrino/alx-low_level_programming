#include "main.h"
/**
 * get_bit - gets bit a index AishatPeregrinoBrimah
 * @n: number to go through
 * @index: index to go through
 * Return: int value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
