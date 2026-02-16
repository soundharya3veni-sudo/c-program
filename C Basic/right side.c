#include <stdio.h>
int main() {
    for (int i=1;i<=5;i++){
     for(int s=1;s<=i;s++){
       printf("*");
   }  
    printf("\n");
    }
    for (int i=1;i<=4;i++){
     for(int s=1;s<=4-i;s++){
       printf("*");
   }  
    printf("\n");
    }
    return 0;
}
