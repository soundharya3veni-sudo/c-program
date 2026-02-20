#include <stdio.h>
int main() 
 {
    int n;
    scanf("%d", &n);

    int sales[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &sales[i]);
    }

    int flag = 1;  // assume sorted

    for(int i = 0; i < n - 1; i++) {
        if(sales[i] > sales[i + 1]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Yes");
    else
        printf("No");

    return 0;
}
