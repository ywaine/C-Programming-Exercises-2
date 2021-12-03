#include <stdio.h>
int main()
{
    float height, weight, BMI;
    printf("Your height in cm is = ");
    scanf("%f", &height);
    printf("Your body weight in kg is = ");
    scanf("%f", &weight);
    if (height <= 0) {
        printf("Please enter correct height");
    }
    else  if (weight <= 0) {
        printf("Please enter correct weight");
    }
    BMI = weight / ((height * 0.01) * (height * 0.01));
    printf("%f", BMI);
}
