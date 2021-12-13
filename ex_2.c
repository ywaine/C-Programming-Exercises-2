#include <stdio.h>
void main()
{
	int n;

	printf("Enter any integer = ");
	scanf_s("%d", &n);
	int sum = (n * (n + 1)) / 2;
		printf("The summation from 1 to %d is", n);
		printf("% d", sum);
}
