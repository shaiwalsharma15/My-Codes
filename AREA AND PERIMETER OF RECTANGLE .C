#include <stdio.h>
int main()
{
    float L,B;
    float A;
    float P;

    printf("the length is \n");
    scanf("%f",&L);
    printf("the breadth is \n");
    scanf("%f",&B);
   
    A=L*B;
    printf("the area of rectangle is %.2f\n", A);

    P=2*(L+B);
    printf("the perimeter of rectangle is %.2f", P);
    return 0;
}
