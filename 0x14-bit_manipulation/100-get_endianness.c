#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int e;
	char *c;

	e = 1;
	c = (char *) &e;

	return ((int)*c);
}
