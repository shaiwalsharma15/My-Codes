#include <stdio.h>
int main()
{
    float num1,num2,num;
    int choice;
    printf("enter the number\n");
    scanf("%f %f",&num1,&num2);
    
    printf("1-add,2-sub,3-mul,4-div\n");
    printf("enter the choice\n");
    scanf("%d", &choice);

switch (choice)
{
    case 1: num=num1+num2;
    printf("the addition of two numbers is %.2f", num);
    break;
    
    case 2: num=num1-num2;
    printf("he subtraction of two numbers is %.2f", num);
    break;
    
     case 3: num=num1*num2;
    printf("he multiplication of two numbers is %.2f", num);
    break;
    
    case 4: num=num1/num2;
    printf("he division of two numbers is %.2f", num);
    break;
    
    default:
    printf("the is a mismatch");
    break;
}
    return 0;
}
