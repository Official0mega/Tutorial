#include <stdio.h>
#include "Newcal.h"

int main(void)
{
	int i;
	int j;

	printf("Enter value for i and j:");
	scanf("%d %d", &i, &j);
	printf("\nSum=%d", Sum(i, j));
	printf("\nMul=%d", Mul(i, j));
	printf("\nSub=%d", Sub(i, j));

	return 0;
}
