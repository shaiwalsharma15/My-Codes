
#include <stdio.h>

int main() {
    int i, j, n, a[50], ctr=0;
    printf("enter the number of elements in array\n\n");
    scanf("%d", &n);
    printf("\nenter %d elements in an array\n",n);
    
    for (i=0;i<n;i++)
    {
    printf("elements - %d:", i);
    scanf("%d",&a[i]);
    }
    
    for (i=0;i<n;i++)
    {
     for (j=i+1; j<n; j++)
     {
      if (a[i]==a[j])
      {
          ctr++;
          break;
       }  
      }
     }
   
   printf("\nno. of duplicate elements found are: %d\n", ctr);
   
    return 0;
}
