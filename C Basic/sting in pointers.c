#include <stdio.h>
int main() {
    char str[50];
    printf("ENTER THE STRING=");
    fgets (str,sizeof(str),stdin);
    char target;
    scanf("%c",target);
    for(int i=0; str[i]!='\0';i++){
        if(str[i]==target){
            printf("%d",i);
        }
    }

    
    return 0;
}
