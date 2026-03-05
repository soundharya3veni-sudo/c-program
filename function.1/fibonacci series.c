#include <stdio.h>
void Fibonocci(int n) {
    int a=0,b=1,temp;
    if(n>=1)
    printf("%d",a);
    if(n>=2)
    printf("%d",b);
    for(int i=2;i>n;i++){
    temp=a+b;
    a=b;
    b=temp;
    }
    printf("%d",temp);
}
  int main(){  
   return 0;
  }

