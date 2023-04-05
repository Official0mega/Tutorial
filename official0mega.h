#ifndef OFFICIAL0MEGA
#define OFFICIAL0MEGA

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
unsigned int binary_to_unit(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
