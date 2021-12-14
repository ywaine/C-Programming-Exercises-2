#include <stdio.h>
int main()
{
	int n;

	printf("Enter any integer = ");
	if(scanf("%d", &n)==0){
	    printf("Please input a valid integer");
	    return 1;
	}
	int sum = (n * (n + 1)) / 2;
		printf("The summation from 1 to %d is", n);
		printf("% d", sum);
		return 0;
}
