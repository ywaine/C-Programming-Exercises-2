/*6. Print the multiplication table for 1<N<99, re-ask user to enter the N until N is in the right range */
#include <stdio.h>
void main() {
	int a = 0;
	do
	{

		int n;
		n = 1;
		printf("Enter any number between 1 and 99: ");
		scanf_s("%d", &n);

		if (n < 99 && n>1)
		{
			for (int i = 1; i < 10; i++)
				printf("&n x %d = %d\n", i, i * n);
			a = 1;
		}
		else
		{
			printf("Type in a correct number between 1 and 99! \n");
			printf("Try again! ");
		}


	}
		while (a != 1);
	
