/*6. Print the multiplication table for 1<N<99, re-ask user to enter the N until N is in the right range */
#include <stdio.h>
#include <math.h>

void main() {
	int a = 0, isInt;
	float isFloat, n;
// 		n = 1;
	    printf("Enter any number between 1 and 99: ");
		isFloat = scanf("%f", &n);
		isInt = round(n);
// 		printf("isInt is %d\n", isInt);
	    	if(isFloat == 0){
	    	    printf("Please enter a valid number");

	    	   }else{
	    do{
	    int printMultiplicationTable(int isInt);
		a = printMultiplicationTable(isInt);
	
	    	} while (a != 1);
	}
		 
}

int printMultiplicationTable(int n){
    int a;
    	if (n < 99 && n>1)
		{
			for (int i = 1; i < 10; i++)
				printf("%d x %d = %d\n", n, i, i * n);
		a = 1;
		return a;
}else{
    printf("Please select a valid number between 1 & 99");
    a = 1;
    return a;
}
}
