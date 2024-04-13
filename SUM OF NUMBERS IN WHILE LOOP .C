#include <stdio.h>

int main() 
{
int num,r,sum=0;
int temp;
printf("enter your number\n");
scanf("%d", &num);
temp=num;

while (num>0)
{
    r=num%10;
    sum=sum+r;
    num=num/10;
}
    printf("%d is the sum of digits of the number %d",sum,temp);

    return 0;
}
