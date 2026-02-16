#include <stdio.h>
int main() {
    int n;
   scanf("%d",&n);
   for (int i=n;i>=1;i++){
    for(int s=1;s<=i;s--){
       printf("%c",64+s);
   }  
    printf("\n");
    } 
    
    return 0;
}
