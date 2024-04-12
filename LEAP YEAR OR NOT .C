#include <stdio.h>
int main()
{
    int y;
    printf("enter the year\n");
    scanf("%d",&y);
    if ((y%4==0&&y%100!=0)||(y%400==0))
    printf("this is a leap year");
    else 
    printf("this is not a leap year");
    return 0;
}
