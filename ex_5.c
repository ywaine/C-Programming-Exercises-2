#include <stdio.h>
int integer;
printf("Enter your integer: ");
scanf("%d",&integer);
int seven = 7;
int three = 3;
int main ()
{
for(int i=0;i <integer; i++)
{
    if(i%seven==0 && i%three==0)
    {
    printf("%d/n", i);
    }
}
return 0;
}
