#include <stdio.h>
#include "Mycal.h"

int main(void)
{
	int n1;
	int n2;

	printf("Enter the value of n1 and n2:");
	scanf("%d %d", &n1, &n2);
	printf("\nSum%d", Sum(n1, n2));
	printf("\nMul%d", Mul(n1, n2));
	printf("\nSub%d", Sub(n1, n2));

	return 0;
}
