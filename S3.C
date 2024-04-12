#include <stdio.h>

int main()
{
float num1,num2;
float num3;
    printf("the first number is \n");
    scanf("%f",&num1);
    printf("the second number is \n");
    scanf("%f",&num2);
   
    num3= num1+num2;
    printf("the sum of two number is %f\n", num3);
   
    num3=num1-num2;
    printf("the difference of two number is %f\n", num3);
    
    num3=num1*num2;
    printf("the product of two number is %f\n", num3);
    
    num3=num1/num2;
    printf("the division of two number is %f", num3);
    
    return 0;
}
