#include <stdio.h>
int main() {
    for (int i=1;i<=5;i++){
      for(int j=1;j<=5-i;j++){
        printf(" ");
    }  
      for(int k=1;k<=2*i-1;k++){
        printf("*");
    } 
    printf("\n"); 
    }    
    for (int i=9;i>=1;i-=2){
       for(int s=9;s>i;s-=2){
         printf(" ");
    }  
        for(int j=0;j<i;j++){
          printf("*");
    } 
   printf("\n"); 
    }
    return 0;       
}

