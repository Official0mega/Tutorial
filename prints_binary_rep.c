/*
 * File: prints_binary_rep.c
 * Created: 5 of April, 2023
 * Auth: David James Taiye.
 * Size: undefined.
 * Project: alx-low_level_programming.
 * Status: submitted.
 */

#include "official0mega.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number
 * @n: the number to be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int prints_binary = 1ul << 40;
	char a = '0';

	while (!(prints_binary & n) && prints_binary != 0)
		prints_binary = prints_binary >> 1;

	if (prints_binary == 0)
		write(1, &a, 1);

	while (prints_binary)
	{
		if (prints_binary & n)
			a = '1';

		else
			a = '0';

		write(1, &a, 1);
		prints_binary = prints_binary >>1;
	}
}
