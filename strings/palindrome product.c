#include <stdio.h>
int main() {
    char str[100];
    int i,len,ammu=0;
    printf("enter the string");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<=len/2;i++){
        if(str[i]!=str[len-i-1])
        {
            ammu=1;
            break;
        }
    }
    if(ammu==0)
        printf("palindrome");
    else
    printf("not palindrome");
    return 0;
}
