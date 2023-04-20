#include "main.h"
#include <stdint.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	uint16_t x = 0x01;
	uint8_t *ptr = (uint8_t *) &x;

	return (*ptr == 0x01 ? 1 : 0);
}
