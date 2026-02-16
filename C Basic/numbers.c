#include <stdio.h>
int main() {
{
  int n;
  scanf("%d",&n);
    for (int i=1;i<=n;i++){
     for(int j=1;j<=i+1;j++){
       printf("%d",j);
   }  
    
   for (int k=1;k<(n-i)*2;k++){
       printf(" ");
   }  
    for(int j=1;j>=n;j++){
       printf(" ");
   } 
   printf("\n"); 
  }  
}

    
    return 0;
}
