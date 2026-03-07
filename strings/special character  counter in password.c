#include <stdio.h>
int main() {
{
    char str[100];
     int i=0,count=0;
     printf("enter password:");
     fgets (str,sizeof(str),stdin);
     while (str[i]!='\0'){
       if(!((str[i]>= 'A' && str[i]<='Z')|| ( str[i]<='a'&&str[i]<='Z')||str[i]<='O'&& str[i]<='9'))
       {
        if(str[i]!='\n')
       }
        count++;
       }
       i++;

     }
     printf("special characters:%d",count);
     return 0;
}
    
