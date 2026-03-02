#include <stdio.h>
void value(int p,int r,int t) {
     int sum=0;
     sum=(p*r*t)/100;
    printf("%d",sum);


}
int main(){
    int p,r,t;
    scanf("%d %d %d",&p,&r,&t);
    value(p,r,t);
    return 0;
  }
   
