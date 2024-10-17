#include <stdio.h>

int main() {
    int i, n, a[50], sum=0;
    printf("enter the number of elements in array\n\n");
    scanf("%d", &n);
    printf("\nenter %d elements in an array\n",n);
    
    for (i=0;i<n;i++)
    {
    printf("elements - %d:", i);
    scanf("%d",&a[i]);
    }
    
    printf("\nthe elements of an array are:\n\n"); 
    for (i=0;i<n;i++)
    {
    printf("% 5d", a[i]);
    }
    
    for (i=0;i<n;i++)
{
    sum+=a[i];
}
    printf("\n\nthe sum of all element in array is:%d\n",sum);
    
    return 0;
}
