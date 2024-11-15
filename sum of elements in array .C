#include <stdio.h>

int main() {
    int arr[100];
    int i, n, sum=0;
    printf("Enter the number of elements in array.\n");
    scanf("%d",&n);
    
    printf("Enter the %d elements in array\n", n);
    for (i=0;i<n;i++)
   {
    printf("Elements - %d : ", i);
    scanf("%d", &arr[i]);
   }
   
  for (i=0;i<n;i++){
  sum=sum+arr[i];
  }
   printf("sum of elements are %d\n",sum);
    
    return 0;
}
