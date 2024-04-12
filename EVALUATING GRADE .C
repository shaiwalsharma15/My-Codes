#include <stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5;
    float P;
    printf("marks of all 5 subjects\n");
    scanf("%f %f %f %f %f", &sub1,&sub2,&sub3,&sub4,&sub5);

    P=(sub1+sub2+sub3+sub4+sub5)/500*100;
    printf("overall percentage %.2f\n", P);
    
    if ((P>=91.0)&&(P<=100.0))
    printf("Grade obtained O");
    else if ((P>=81.0)&&(P<=90.0))
    printf("Grade obtained A");
    else if ((P>=71.0)&&(P<=80.0))
    printf("Grade obtained B");
    else if ((P>=61.0)&&(P<=70.0))
    printf("Grade obtained C");
    else if ((P>=51.0)&&(P<=60.0))
    printf("Grade obtained D");
    else
    printf("Fail");
    return 0;
}
