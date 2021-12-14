#include <stdio.h>
int var3;
int var7;

int main(){
    int input, zero;
    var3 = 3;
    var7 = 7;
    
    printf("Please enter an integer: ");
    int isInt = scanf("%i", &input);
    
    if(isInt==0){
        printf("Invalid input: Please make sure your input is an integer.");
        return 0;
    }else{
        int a=1;
        printf("All common multiples of 3 & 7 between 1 & %i are: \n", input);
    do{
        if(a%var3==0 && a%var7==0){
           printf("%i. \n", a);
           zero = 0;
        }else{
            zero = 1;
          //printf("%i is not a multiple of 3 or 7. \n", a);
        }
        
        a++;
    }while(a < input);
    
    if(a<21){
        printf("There are none.");
    }
    return zero;
    }
}
