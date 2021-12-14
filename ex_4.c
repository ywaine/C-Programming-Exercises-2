#include <stdio.h>


int main()

{

	float a, b, c, d;

	printf("Please enter 3 real numbers: ");

if(scanf("%f", &a)==0){
	    printf("Please input a valid number");
	    return 1;
	}
	
	if(scanf("%f", &b)==0){
	    printf("Please input a valid number");
	    return 1;
	}
	
	if(scanf("%f", &c)==0){
	    printf("Please input a valid number");
	    return 1;
	}
	
	float averageCalculate(float a, float b, float c);
	
  d = averageCalculate(a,b,c);
	
	printf("\nThe average is %f", d);

	return 0;
}

float averageCalculate(float a, float b, float c){
    float sum = a + b + c;

	float d = (a + b + c) / 3;
}
