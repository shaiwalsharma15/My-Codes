#include<stdio.h>
int main()
{
    int num,rev=0,temp,r;
    printf("enter the number\n");
    scanf("%d", &num);
    temp=num;
    while (num>0)
    {
        r=num%10;
        num=num/10;
        rev=rev*10+r;
    }
    if (rev==temp)
    printf("number is palindrome");
    else
    printf("number is not palindrome");
    
    return 0;
}
