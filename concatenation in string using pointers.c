#include <stdio.h>
void concat_strings(char *str1,char *str,char *result){
    while(*str1 !='\0'){
        *result= *str1;
         str1++;
         result++;
    }
    while(*str2 != '\0'){
        *result =*str2;
        str2 ++;
        result++;
    }
    *result ='\0';
}
{
int main()
char str1[100],str2[100],result[200];
printf("enter the string:");
fgets(str1,100,stdin);
printf("enter second string:");
fgets(str2,100,stdin);
for(char *p= str;*p !='\0';p++){
  if(*p =='\n') *p !='\0';
  }
  for(char *p = str1;*p !='\0';p++){
    if(*p =='\n') *p !='\0';
  }
  concat_strings(str1,str2,result);
     printf("concatenated string:%s\n",result);
   return 0;
  } 


    
  
