#include <stdio.h>
int main(){
   char str[100];
   fgets(str, MaxCount:sizeof(str),stdin);
   for(int i=0;str[i]!='\0';i++){
    if(str[i]>=='@'){
        break;
    }
       }
   else{
    printf("%c"str[i]);
   }
    return 0;
}
