#include <stdio.h>

int main() {
    int arr[100];
    int i, n;
    printf("Enter the number of elements in array.\n");
    scanf("%d",&n);
    
    printf("Enter the %d elements in array\n", n);
    for (i=0;i<n;i++)
   {
    printf("Elements - %d : ", i);
    scanf("%d", &arr[i]);
   }
   
  for (i=0;i<n;i++)
  {
      if (arr[i]%2==0)
      arr[i]=0;
      
  }
  printf("the modified array is\n");
  
   for (i=0;i<n;i++)
   {
    printf("Elements - %d : ", i);
    printf("%d\n", arr[i]);
   }
   
    return 0;
}
