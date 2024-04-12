#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("the first number is \n");
    scanf("%d", &a);
    printf("the second number is \n");
    scanf("%d", &b);
    printf("the third number is \n");
    scanf("%d", &c);
if ((a+b)>c&&(a+c)>b&&(b+c)>a)
{
printf ("the triangle will form\n");
if (a==b&&b==c&&c==a)
printf("this triangle is equilateral\n");
else if (a==b||b==c||c==a)
printf("this triangle is isosceles\n");
else 
printf("this triangle is scalene");
}

else 
printf("the triangle will not form");

    return 0;
}
