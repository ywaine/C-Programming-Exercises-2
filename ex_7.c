#include <stdio.h>

int main() {
  int n;
	printf("Enter any integer number: ");
	scanf("%d", &n);
	int primec(int n);
	int b = primec(n);
	if(b==1)
	{
		printf("%d is a prime number.", n);
	}else if(b==0)
	{
		printf("%d is not a prime number.", n);
	}
}

int primec(int n) {
		int d = 1;
		if (n == 1) {
		    d = 1;
			return d;
		}
		
		for (int i = 2; i < n; i++) {
			// condition for non-prime
			if (n % i == 0) {
			    d = 0;
				return d;
			}
		}
		return d;

}
