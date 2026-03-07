#include <stdio.h>
int main() {
    char str[100];
    int i,count=0;i=0;
    printf("enter the string:");
    gets(str,sizeof(str),stdin);
    for(i=0;str[i]!= '\0';i++)
    char ch=tolower(str,stdin);
    {
        if(str[i]=='a'||str[i]=='e'|| str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='i'||str[i]=='O'||str[i]=='U')
        
        count++;
    }
     printf("%d",count);
    return 0;
}
