#include <stdio.h>
int main()
{
    int m;
    printf("Enter the month\n");
    scanf("%d",&m);
    if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    printf("this month has 31 days");
    else if (m==4||m==6||m==9||m==11)
    printf("this month has 30 dyas");
    else if (m==2)
    printf("this month has 29 days");
    else 
    printf("not a valid month");
    return 0;
}
