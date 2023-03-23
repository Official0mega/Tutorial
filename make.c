#include <stdio.h>

/**
 * main - function that prints numbers
 * @argc: number of arguments
 * Return: Always 0. (Success)
 */

int Sum(int arg1, int arg2, int arg3, int arg4, int arg5)
{
	int Sum = 0;
	int i;
	int argc = 100;

	for (i = 0; i < argc; i++)
		Sum += arg1 + arg2 + arg3 + arg4 + arg5;

	return Sum;
}

int main(void)
{
	int i;

	for (i = 0; i < 5; i++)
		printf("%d\n", Sum(i, i + 1, i + 2, i + 3, i + 4));

	return 0;
}
