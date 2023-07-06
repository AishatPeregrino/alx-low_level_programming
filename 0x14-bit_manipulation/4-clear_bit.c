#include "main.h"
#include "2-get_bit.c"
/**
 * Author:Aishat Peregrino-Brimah
 * clear_bit - clears index to 0
 * @n: integer to pass
 * @index: index to go to
 * Return: returns integer val
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}