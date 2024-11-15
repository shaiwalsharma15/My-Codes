
#include <stdio.h>

int main() {
    int arr[100];
    int i, n, min, max;
    printf("Enter the number of elements in array.\n");
    scanf("%d",&n);
    
    printf("Enter the %d elements in array\n", n);
    for (i=0;i<n;i++)
   {
    printf("Elements - %d : ", i);
    scanf("%d", &arr[i]);
   }
   
   max=arr[0];
   for (i=1;i<n;i++)
   {
     if (max<arr[i])
           max=arr[i];
   }
   
   
   min=arr[0];
   for (i=1;i<n;i++)
   {
     if (min>arr[i])  
         min=arr[i];
   }
   
   printf("The maximum element is %d and minimum element is %d",max,min);
   
    return 0;
}
