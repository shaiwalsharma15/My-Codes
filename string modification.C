#include <stdio.h>
#include <string.h>
int main() {
 char str[20];
 int i,n;
 printf("Enter the string\n");
 scanf("%s",str);
 printf("\n The entered string is %s  ", str);
 n=strlen(str);
 printf("\n length of string is %d\n", n);

i=0;
while (i<n){
    if (str[i]=='a')
    str[i]='z';
    else 
    i++;
    }
    printf("the modified string is %s",str);
    return 0;
}
