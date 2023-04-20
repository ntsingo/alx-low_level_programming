#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number represented as a string
 * to an unsigned integer.
 * @binary: A pointer to a string that represents the binary number.
 *
 * Return: The unsigned integer converted from binary.
 */
unsigned int binary_to_uint(const char *binary)
{
    unsigned int result = 0;
    int len, base_two = 1;

    /* Check if binary string is NULL */
    if (binary == NULL)
        return (0);

    /* Find the length of the binary string */
    for (len = 0; binary[len] != '\0'; len++);

    /* Convert binary string to unsigned integer */
    for (len -= 1; len >= 0; len--, base_two *= 2)
    {
        if (binary[len] != '0' && binary[len] != '1')
            return (0);

        if (binary[len] & 1)
            result += base_two;
    }

    return (result);
}

