#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int arr[R][C];

    // Input matrix
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int maxUnique = 0;
    int index = 0;

    for(int i = 0; i < R; i++) {
        int uniqueCount = 0;

        for(int j = 0; j < C; j++) {
            int isUnique = 1;

            for(int k = 0; k < j; k++) {
                if(arr[i][j] == arr[i][k]) {
                    isUnique = 0;
                    break;
                }
            }

            if(isUnique)
                uniqueCount++;
        }

        if(uniqueCount > maxUnique) {
            maxUnique = uniqueCount;
            index = i;
        }
    }

    printf("%d", index);
    return 0;
}
