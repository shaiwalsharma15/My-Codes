#include <stdio.h>

int main() {
    int i, n, a[100];
    
    printf("Enter the number of values in array:\n\n");
    scanf("%d",&n);
    printf("\nEnter %d elements of an array:\n" ,n);
    for (i=0; i<n; i++)
    {
        printf("Element - %d : ",i);
        scanf("%d", &a[i]);
    }
    
    printf("\nThe value stored in the array are:\n");
    for (i=0; i<n; i++)
    {
        printf("% 5d", a[i]);
        
    }
    
    printf("\nThe reversed of an array is:\n");
    for (i=n-1; i>=0; i--)
    {
        printf("% 5d",a[i]);
    }
    
    return 0;
}
