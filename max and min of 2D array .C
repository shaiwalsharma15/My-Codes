#include <stdio.h>

int main() {
    
    int arr[50][50];
    int i, j, n, m;
    int max, min;
    
    printf("Enter the number of rows:");
    scanf("%d", &n);
    
    printf("Enter the number of columns:");
    scanf("%d", &m);
    
    printf("Enter the elements in array :-\n");
    
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("Enter value for arr [%d] [%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    
    max=arr[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if (arr[i][j]>max)
            max=arr[i][j];
        }
    }
    
    printf("the maximum element of array is %d\n", max);
    
    min=arr[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if (arr[i][j]<min)
            min=arr[i][j];
        }
    }
    
    printf("the maximum element of array is %d", min);
    
    return 0;
}
