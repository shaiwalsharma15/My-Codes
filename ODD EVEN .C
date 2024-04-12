#include <stdio.h>

int main()
{
    int a;
    int r;
    printf("the given number is \n");
    scanf("%d", &a);
    
r=a%2;
if (r==0)
printf("the given number is even");
else 
printf("the given number is odd");
   
    return 0;
}
