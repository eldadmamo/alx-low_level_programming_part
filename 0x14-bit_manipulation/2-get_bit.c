#include "main.h"

/**
 * get_bit - Returns the value of a bit given index.
 * @n: The unsigned long integ
 * @index: The index of the bit to get, starting from 0.
 *
 * Return: value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
