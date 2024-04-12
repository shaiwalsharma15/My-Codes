#include <stdio.h>

int main()
{
int choice;
int l,b;
int Ar;
int a;
int As;
printf("Enter either 1 or 2 \n");
scanf("%d", &choice);
if (choice==1)
{
printf("you selected rectangle please enter lenght and breadth\n");
scanf("%d %d", &l,&b);
Ar=l*b;
printf("Area of rectangle %d\n", Ar);
}
else if (choice==2)
{
printf("you selected square please enter side\n");
scanf("%d",&a);
As=a*a;
printf("Area of square %d\n",As);
}
else 
printf("you have entered wrong choice");
    return 0;
}
