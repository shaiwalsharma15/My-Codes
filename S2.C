#include <stdio.h>

int main()
{
float num1=3.0,num2=2.0;
float num3;
    printf("the first number is %.3f\n", num1);
    printf("the second number is %.3f\n", num2);
   
    num3= num1+num2;
    printf("the sum of two number is %.3f\n", num3);
   
    num3=num1-num2;
    printf("the difference of two number is %.3f\n", num3);
    
    num3=num1*num2;
    printf("the product of two number is %.3f\n", num3);
    
    num3=num1/num2;
    printf("the division of two number is %.3f", num3);
    
    return 0;
}
