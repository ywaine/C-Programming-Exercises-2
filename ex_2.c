#include <stdio.h>
int main()
{
	int intg, summ = 0, i;
	printf("integer = ");
	scanf("%d", &intg);
	for (i = 1; i <= intg; i++) {
		summ = summ + i;
	}
	printf("%d", summ);
	return 1;
}
