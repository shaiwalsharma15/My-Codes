#include <stdio.h>

int main() 
{
int sum=0;
int n;
int temp;
printf("enter your number\n");
scanf("%d", &n);
temp=n;
while (n>0)
{
    sum=sum+n;
    n=n-1;
}
    printf("%d is the sum of first %d natural numbers.",sum,temp);

    return 0;
}
