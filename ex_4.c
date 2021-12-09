#include<stdio.h>

float main()

{

	float a, b, c, sum;

	float d;
	
	printf("Please enter 3 real numbers :");

	scanf_s("%f%f%f", &a, &b, &c);

	sum = a + b + c;

	d = (a + b + c) / 3;

	printf("\nThe average is %f", d);

	return 0;

}
