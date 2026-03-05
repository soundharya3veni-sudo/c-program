#include <stdio.h>
int add(int a,int b) {
    return a+b;
}
int sub(int a,int b ){
    return a-b ;            
}
int mul( int a,int b){
    return a*b;
} 
int division (int a,int b){
    if(b!=0){
        return a/b;
    }
    else{
    printf("division by zero is not possible");
    return 0;
 }
int main(){
int a,b;
char choice;
scanf("%d %d %c",&a,&b,&choice);
switch (choice){
    case'+':
    printf("%d",add(a,b));
    case '-':
    printf("%d",sub(a,b));
    case'*':
    printf("%d",mul(a,b));
    case'%':
    printf("%d",divi(a,b));
    default:
    printf("invalid choice");
   }
   }
    return 0;
   }
