#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    printf("pre:%d",++n);
    printf("post:%d",n++);
    return 0;
}
