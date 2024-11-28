#include <stdio.h>

int main() {
    
    int arr[50][50];
    int i, j, n, m;
    int sum=0;
    
    printf("Enter the number of rows:");
    scanf("%d", &n);
    
    printf("Enter the number of columns:");
    scanf("%d", &m);
    
    printf("Enter the elements in array :\n");
    
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("Enter value for arr [%d] [%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
    }
    
    printf("\nThe sum of array is %d:",sum);
    
    return 0;
}
