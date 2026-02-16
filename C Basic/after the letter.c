#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
   for (int i=1;i>=n;i++){
    for(int s=n;s<=n;s++){
       printf("%c",64+s);
   }  
    printf("\n");
    }
    return 0;
}
