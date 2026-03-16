#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("enter the string:");
    gets(str);
    printf("Length  of the string =%d",strlen(str));
    
    return 0;
}
