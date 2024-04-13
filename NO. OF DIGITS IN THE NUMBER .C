#include <stdio.h>

int main() 
{
int num,r,i=0;
int temp;
printf("enter your number\n");
scanf("%d", &num);
temp=num;

while (num>0)
{
    r=num%10;
    i+=1;
    num=num/10;
}
    printf("%d is the number of digits in the number %d",i,temp);

    return 0;
}b
