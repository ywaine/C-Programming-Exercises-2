#include <stdio.h>
int i, flag = 0;
int n = 0;
int primec(int n);
bool b;

int main() {

	printf("Enter any integer number: ");
	scanf_s("%d", &n);
	bool b = primec(n);
	if(b==true)
	{
		printf("%d is a prime number.", n);
	}else
	{
		printf("%d is not a prime number.", n);
	}
}

int primec(int n) {
		bool d = false;
		for (i = 2; i <= n / 2; ++i) {
			// condition for non-prime
			if (n % i == 0) {
				flag = 1;
				break;
			}
		}

		if (n == 1) {
			d = false;
		}
		else {
			if (flag == 0) {
				d = true;
			}
			else {
				d = false;
			}

		}
		return d;
}
