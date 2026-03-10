#include <stdio.h>
#include<string.h>
int is_palindrome(char*str){
    char*start=str;
    char*end=str + strlen(str)-1;
    while (start<end){
        if(*start !=*end ){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main()
char str[100];
printf("enter the string:");
fgets(str,100,stdin);
for(char *p= str;*p !='\0';p++){
  if(*p =='\n') *p !='\0';
  }
  if(is_palindrome(str)){
     printf("%s is  a palindrome\n",str);
  }else{
    printf("%s is a palindrome\n",str);
  }
   return 0;
   


    
