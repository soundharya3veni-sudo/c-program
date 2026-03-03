#include <stdio.h>
void circle(int n) {
     double multiply=0;
     multiply=3.14*n*n;
    printf("%.2lf",multiply);


}
int main(){
    int n;
    scanf("%d",&n);
    circle(n);
    return 0;
  }
   
