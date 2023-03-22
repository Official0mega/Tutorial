#include <stdio.h>
#include "prog.h"

/**
 * main - program that calculates numbers
 * using any figures preferably
 *
 * Return: Always 0. (Success)
 */

int main(void)
{
	int a = 2;
	float b = 4.62;
	double c = 10.5;

	printf("Enter the value for a, b, c:");
	scanf("%d %f %lf", &a, &b, &c);
	printf("\nSum=%d", Sum(a, b, c));
	printf("\nMul=%d", Mul(a, b, c));
	printf("\nSub=%lf", Sub(a, b, c));

	return(0);
}
