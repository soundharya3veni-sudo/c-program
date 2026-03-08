int main() {
    char str[100];
     int i,count=0;
     printf("enter the string:");
     fgets (str,sizeof(str),stdin);
     int space =1;
     for(i=0;str[i]!='\0';i++)
       if(str[i]==' '){
       
        space++;
       }
     printf("%d",space);
    return 0;
}
