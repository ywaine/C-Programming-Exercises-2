#include <stdlib.h>
#include <stdio.h>

void main() {

	char o;
	printf("You can play Rock Paper Scissors game \n");
	int a;
	a = 0;

	printf("Please enter R or r for Rock, P or p for Paper, s or S for Scissor \n");
	printf("If you want to finish the game, enter x or X \n");


	while (a != 1)
	{
		scanf("%c", &o);
		getchar();
		

		switch (o)
		{
		case 'R':
			printf("Paper \n");
			break;
		case 'r':
			printf("Paper \n");
			break;
		case 'P':
			printf("Scissors \n");
			break;
		case 'p':
			printf("Scissors \n");
			break;
		case 'S':
			printf("Rock \n");
			break;
		case 's':
			printf("Rock \n");
			break;
		case 'X':
			printf("Exiting \n");
			a = 1;
			void exit(int status);
			break;
		case 'x':
			printf("Exiting \n");
			a = 1;
			void exit(int status);
			break;
		default:
			printf("Try again! Please enter the right character \n");
			break;
		}
	}
}

