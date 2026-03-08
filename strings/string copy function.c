#include <stdio.h>
#include<string.h>
int main() {
    char str[60]; 
    char str2[60];
     printf("enter the string:");
     fgets (str,sizeof(str),stdin);
     strcpy(str2,str);
     printf("%s",str2);
    return 0;
}
