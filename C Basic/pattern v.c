#include <stdio.h>
int main() {
    for (int i=1;i<=5;i++){
     for(int s=1;s<=i+1;s++){
       printf(" ");
   }  
     for(int j=1;j<=11-2*i;j++){
       printf("*");
   } 
   printf("\n"); 
  }
    return 0;       
}
