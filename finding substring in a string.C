#include <stdio.h>
#include <string.h>
int main() {
 char s1[30], s2[30];
 int i=0,j=0,n1,n2, flag=0;
 
 printf("Enter the 1 string\n");
 scanf("%s",s1);
 printf("The entered string is %s  \n", s1);
 n1=strlen(s1);
 printf("length of string is %d\n", n1);
 
 printf("\nEnter the 2 string\n");
 scanf("%s",s2);
 printf("The entered string is %s  ", s2);
 n2=strlen(s2);
 printf("\nlength of string is %d\n", n2);

 while (i<n1){
     if (s1[i]==s2[j]){
         i++;
         j++;
         if (j==n2-1)
         {
         flag=1; 
         break;
         }
         else
         continue;
        
     }
     else
     i++;
 }
 if (flag==1)
 printf("s2 is contained in s1");
 else
 printf("s2 is not contained in s1");
    return 0;
}
