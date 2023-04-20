#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> // for size_t

unsigned int binary_to_uint(const char *binary_string);
void print_binary(unsigned long int number);
int _putchar(char character);
int get_bit(unsigned long int number, size_t index);
int set_bit(unsigned long int *number, size_t index);
int clear_bit(unsigned long int *number, size_t index);
unsigned int flip_bits(unsigned long int number1, unsigned long int number2);
int get_endianness(void);

#endif
