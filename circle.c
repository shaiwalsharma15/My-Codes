#include <stdio.h>

 float pi=3.14;
 float area ( int r)
 { 
     float a;
     a= pi*(r*r);
     return a;
 }
 
 float perimeter (int r)
 {
     float p;
     p= 2*(pi*r);
     return p;
 }
 
 int main()
 {
    float ar;
    float pr;
    ar= area(2);
    pr= perimeter(3);
    printf("area of circle is %.2f\n",ar);
    printf("perimeter of circle is %.2f\n",pr);
    return 0;
 }
