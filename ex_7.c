#include <stdio.h>
int main() {
	int n, output;
	printf("Enter any integer number : ");
	int isInt = scanf("%i", &n);
	if(isInt==0){
	    printf("Please enter a valid integer number: ");
	    return 0;
	}
    int primeCheck(int n);
    output = primeCheck(n);

		if(output == 1){
			printf("%i is a prime number.", n);
		}else if(output == 0){
			printf("%i is not a prime number.", n);
		}
}

int primeCheck(int n){
    
	for (int i = 2; i <= n / 2; i++) {
		// condition for prime
		if (n % i == 0) {
			return 1;
			break;
		}
	}

	
}
