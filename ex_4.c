#include <stdio.h>


void main()

{

	float a, b, c, d;

	printf("Please enter 3 real numbers :");

	scanf("%f%f%f", &a, &b, &c);
	
	float averageCalculate(float a, float b, float c);
	
  d = averageCalculate(a,b,c);
	
	printf("\nThe average is %f", d);

}

float averageCalculate(float a, float b, float c){
    float sum = a + b + c;

	float d = (a + b + c) / 3;
	
	return d;

}
