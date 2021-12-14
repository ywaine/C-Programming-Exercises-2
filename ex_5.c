/*Write a program that prints all common multiples of 3 and 7 between 1 and the
integer entered by the user. Use global variables to store 3 and 7. 
*/
#include <stdio.h>
int seven = 7;
int three = 3;
int main ()
{
int integer;
printf("Enter your integer: ");
scanf("%d", &integer);
{
for(int i=1;i <integer; i++)
    if(i%seven==0 && i%three==0)
    {
    printf("%d\n", i);
    }
}
return 0;
}
