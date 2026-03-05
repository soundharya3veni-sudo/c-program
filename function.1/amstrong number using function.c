#include <stdio.h>
int num(int n){
int rem,cube;
rem=n%10;
cube=rem*rem*rem;
n=n/10;
if(n==cube){
  printf("amstrong num");
}else{
  printf("not an amstrong num");
}
}
int main() 
{  
  int n;
  printf("ENTER THE NUM= ");
  scanf("%d",&n);
  int x;
  x=num(n);
  return 0;


}
