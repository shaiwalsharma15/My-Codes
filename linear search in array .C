#include <stdio.h>

int main() {
    
    int arr[50], i, n, e , flag=0;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to be searched\n");
    scanf("%d",&e);
    
    for(i=0;i<n;i++){
       if (e==arr[i]) {
           printf("The element is found at index %d",i);
           flag=1;
           break;
       }
       else 
       continue;
    }
    printf("Element is not found in array");
    
       return 0;
}
