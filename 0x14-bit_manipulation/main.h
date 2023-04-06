#ifndef main.h
#define main.h
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int a);
int get_bit(unsigned long int a, unsigned int index);
int set_bit(unsigned long int *a, unsigned int index);
int clear_bit(unsigned long int *a, unsigned int index);
unsigned int flip_bits(unsigned long int a, unsigned long int m);
int get_endianness(void);
#endif
