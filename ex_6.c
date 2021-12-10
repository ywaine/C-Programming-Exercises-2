/*6. Print the multiplication table for 1<N<99, re-ask user to enter the N until N is in the right range */
#include <stdio.h>
void main() {
	int a = 0;
	int n;
	int isInt;
// 		n = 1;
	    printf("Enter any number between 1 and 99: ");
		isInt = scanf("%d", &n);
	    	if(isInt == 0){
	    	    printf("Your input is incorrect please restart the program");

	    	   }else{
	    	       
	    	do{
	    int printMultiplicationTable(int n);
		a = printMultiplicationTable(n);
	    	} while (a != 1);
		
	}
		 
}

int printMultiplicationTable(int n){
    int a;
    	if (n < 99 && n>1)
		{
			for (int i = 1; i < 10; i++)
				printf("%d x %d = %d\n", n, i, i * n);
		return a = 1;
		}
		else
		{
			printf("Type in a correct number between 1 and 99! \n");
			printf("Try again! ");
		}
}
