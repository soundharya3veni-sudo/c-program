#include <stdio.h>
int sum(int a)

{  
    int v;
    int sum=0;
    while(a!=0){
    
    v=a%10;
    sum=sum+v;
    a=a/10;

}
return sum;
}
int main(){
    int x;
    scanf("%d",&x);
    
    printf("%d",sum(x));
    return 0;
}
