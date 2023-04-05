/*
 * File: bin_uint.c
 * Created: 5 of April, 2023
 * Auth: David James Taiye.
 * Size: undefined.
 * Project: alx-low_level_programming.
 * Status: submitted.
 */

#include "official0mega.h"

/**
 * binary_to_unit - a function that converts a binary number
 * to an unsigned integer.
 * @b: const char
 * Return: returns the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int rate = 0;
	int a = 0;

	if (b == NULL)
		return (0);
	
	while (b[a] == '0' || b[a] == '1')
	{  // discovered other digits.
		rate <<= 1;
		rate += b[a] - '0';
		a++;
	}
	return rate;
}

