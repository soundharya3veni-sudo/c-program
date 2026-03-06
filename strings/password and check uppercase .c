#include <stdio.h>
int main() {
   char str[20];
   fgets(str, MaxCount:sizeof(str),stdin);
   int upper=0;
   for(int i=0;str[i]!='\0';i++){
    if(str[i]>='A'&& str[i]<='z'){
        upper=1;
        break;
    }
   }
   if(upper==1){
    printf("valid");
   }
   else{
    printf("invalid");
   }
    
    return 0;
}
