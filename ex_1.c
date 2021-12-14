#include <stdio.h>
int main()
{
    float height, weight, BMI;
    printf("Your height in cm is = ");
    scanf("%f", &height);
    if (height <= 0) {
        printf("Please enter correct height");
         // Rerun method if input is invalid
        main();
    }
    printf("Your body weight in kg is = ");
    scanf("%f", &weight);
    if (weight <= 0) {
        printf("Please enter correct weight");
        // Rerun method if input is invalid
        main();
    }
    BMI = (weight / ((height * 0.01) * (height * 0.01)));
    printf("%f", BMI);
    return 0;
}
