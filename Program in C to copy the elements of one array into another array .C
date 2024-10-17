#include <stdio.h>

int main() {
    int i, n, a1[50], a2[50];
    printf("enter the number of elements in array\n\n");
    scanf("%d", &n);
    printf("\nenter %d elements in an array\n",n);
    
    for (i=0;i<n;i++)
    {
    printf("elements - %d:", i);
    scanf("%d",&a1[i]);
    }
    
    for (i=0;i<n;i++)
    {
    a2[i]=a1[i];
    }
    
    printf("\nthe elements of an array are:\n\n"); 
    for (i=0;i<n;i++)
    {
    printf("% 5d", a1[i]);
    }
    
    printf("\n\nthe elements copied into second array are:\n\n");
    for (i=0;i<n;i++)
    {
    printf("% 5d",a2[i]);       
    }

    return 0;
}
