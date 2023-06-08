#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h> /* NULL */

/* helper function */
int _putchar(char c);

/* function prototypes for all files */
int set_bit(unsigned long int *n, unsigned int index);
unsigned int binary_to_uint(const char *b);
int get_endianness(void);
int get_bit(unsigned long int n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
void print_binary(unsigned long int n);

#endif