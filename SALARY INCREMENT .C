#include <stdio.h>

int main()
{
    int salary;
    printf("the salary is \n");
    scanf("%d", &salary);
    
    if (salary<10000)
   {
    salary=salary+1000;
    printf("new salary is %d",salary);
   }
    else 
    printf("moj hai");
    return 0;
}
