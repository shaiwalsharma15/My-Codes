#include <stdio.h>
#include <string.h>
int main() {
 char str[20];
 int i,j,n, flag=0;
 printf("Enter the string\n");
 scanf("%s",str);
 printf("\n The entered string is %s  ", str);
 n=strlen(str);
 printf("\n length of string is %d\n", n);
 i=0;
 j=n-1;
while((i<=n/2) && (j>=n/2))
{
    if(str[i]!=str[j])
     {
         flag=1;
         break;
     }
     else
     {
         i++;
         j--;
     }
}
if(flag==0)
  printf("Pallindrome");
else
  printf("Not pallindrome");
    
    return 0;
}
