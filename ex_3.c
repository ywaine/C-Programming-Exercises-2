#include <stdio.h>


int main()
{
   int firstint, secondint;
 printf("First integer = ");
  if(scanf("%d", &firstint)==0){
       printf("\nPlease enter a valid integer \n");
       return 1;
       
  } else{
 printf("Second integer = ");
 if(scanf("%d", &secondint)==0){
       printf("\nPlease enter a valid integer \n");
       return 1;
  }
}
   if(firstint > secondint){
      printf("%d is larger", firstint);
    return 0;
   }else if(firstint == secondint){
         printf("%d (is the same)", firstint);
    return 0;
   }else if(firstint>secondint){
      printf("%d is larger", secondint);
   return 0;
   } else{
       printf("Please enter a valid integer");
      return 1;
   }
}
