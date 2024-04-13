#include <stdio.h>

int main() 
{
int product=1;
int n;
int temp;
printf("enter your number\n");
scanf("%d", &n);
temp=n;
while (n>0)
{
    product=product*n;
    n=n-1;
}
    printf("%d is the factorial of %d.", product,temp);

    return 0;
}
