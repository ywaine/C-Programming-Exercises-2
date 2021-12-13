/*5. Print common multiples of 3 and 7 btw 1 to n which is entered by user */
#include <stdio.h>
int main()
{
	int i;
	int a = 3;
	int b = 7;
	int n;
	int c = 0;
	printf("Enter any integer number: ");
	scanf_s("%d", &n);
	printf("The common multiples between 1 and %i are: \n", n);
	for (i = 1; i < n; i++) {
		//conditional statement: if i/21 has no reminder
		if (i % (a*b) == 0) {
			printf("%d\n", i);
			c = +1;
		}
	}
	if (c==0)
	{
		printf("There is no common multiple between 1 and %d \n", n);
	}
	return 0;
}

