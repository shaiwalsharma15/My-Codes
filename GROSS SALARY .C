#include <stdio.h>
int main()
{
    float Bsalary,hra,da,Gsalary;
    printf("Enter basic salary\n");
    scanf("%f",&Bsalary);
    
   if (Bsalary<=10000.0)
   {
   da= Bsalary*0.8;
   hra= Bsalary*0.2;
   }
   
   if (Bsalary>10000.0&&Bsalary<=20000.0)
   {
   da=Bsalary*0.9;
   hra=Bsalary*0.25;
   }
   
   if (Bsalary>20000)
   {
   da=Bsalary*0.95;
   hra=Bsalary*0.3;
   }
   
   Gsalary=Bsalary+hra+da;
   printf("Gross salary %.2f", Gsalary);
    return 0;
}
