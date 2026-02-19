#include <stdio.h>
int main() {
    for (int i=1;i<=5;i++){
    for(int s=1;s<=i;s++){
       printf("%c",64+s);
   }  
    printf("\n");
    }
    return 0;
}
