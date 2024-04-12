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
  if (a>=b)
  {
      if (a>=c)
  printf("The greatest number is %d", a);
  else 
  printf("The greatest number is %d",c);
      
  } 
  else 
  {
      if (b>=c) 
  printf("The greatest number is %d", b); 
  else 
  printf("the greatest number is %d",c);
      
  }

    return 0;
}
