#include <stdio.h>

int main() {
    
    int arr[50][50];
    int i, j, n, m;
    int sum=0;
    
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
    
    for (j=0;j<m;j++){
        sum=0;
        for (i=0;i<n;i++){
            sum=sum+arr[i][j];
        }
        printf("Sum of Column %d is %d\n",j,sum);
    }
    
    for (i=0;i<n;i++){
        sum=0;
        for (j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
        printf("Sum of Row %d is %d\n",i,sum);
    }
     
    return 0;
}
