#include <stdio.h>
int main() {
    char str[100];
     int i=0,count=0;
     printf("enter product ID:");
     fgets (str,sizeof(str),stdin);
     while (str[i]!='\0'){
       if(str[i]>= '0' && str[i]<='9'){
        count++;
       }
       i++;

     }
     printf("number of digits:%d",count);
     return 0;
}
    
