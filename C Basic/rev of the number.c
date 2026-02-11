#include <stdio.h>
int main() {
    int n;
    int rev=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        rev=rev*i;
    }
    printf("%d",rev);

    
    return 0;
}
