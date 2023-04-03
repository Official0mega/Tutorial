#include <stdio.h>
/*
 * main - A Program to calculate numbers
 * @my_add: first addition.
 * @my_sub: second subtraction
 *
 * Return: Always 0. (Success)
 */

int my_add(int a, int b);
int my_sub(int a, int c);

int main(void)
{
	printf("50+50=%d\n", my_add(50,50));
	printf("100-67=%d\n", my_sub(100,67));
	return (0);
}
