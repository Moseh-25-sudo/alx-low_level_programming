#include "main.h"

/**
 * get_endianness - checks if a machine is liyyle or big endian
 * Return: 0 fot big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) & i;

	return (*c);
}
