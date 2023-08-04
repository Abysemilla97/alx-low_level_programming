#include "main.h"

/**
 * get_endianness - a function checking the endianess.
 *
 * Return: 0 if big endian, 1 if little endian.
 *
 */
int get_endianness(void)
{
	unsigned int numb = 1;
	unsigned char *p = (unsigned char *)&numb;

	return ((*p == 1) ? 1 : 0);
}
