#include <stdio.h>
int main()
{
    float num1,num2,num3,num4,num5,num6;
    float Avg;
    
    printf("the first numbers is \n");
    scanf("%f", &num1);
    printf("the second number is \n");
    scanf("%f", &num2);
    printf("the third number is \n");
    scanf("%f", &num3);
    printf("the fourth number is \n");
    scanf("%f", &num4);
    printf("the fifth number is \n");
    scanf("%f", &num5);
    printf("the sixth number is \n");
    scanf("%f", &num6);
    
    Avg=(num1+num2+num3+num4+num5+num6)/6;
    printf("Average of numbers is %.2f",Avg);
    return 0;
}
