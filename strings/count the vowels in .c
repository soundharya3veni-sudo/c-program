#include <stdio.h>
    int count_vowels(char*str){
     int count =0;
     while (*str!='\0'){
       if((*str[i]>= 'A' && str[i]<='Z')|| ( str[i]<='a'&&str[i]<='Z')||str[i]<='O'&& str[i]<='9'){
       
       }
        count++;
       }
       str++;
       }
        return count;

     int main(){
        char str[100];
        fgets(str,100,stdin);
        for(char*p=str;*p!='\0';p++){
             if(*p=='\n')*p='\0';
     }
     printf("%d\n",count_vowels(str));
     return 0;
}
