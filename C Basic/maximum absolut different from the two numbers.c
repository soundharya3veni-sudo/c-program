#include <stdio.h>
#include <stdlib.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    int maxDiff = 0;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            for(int k = 0; k < R; k++) {
                if(i != k) {
                    for(int l = 0; l < C; l++) {
                        int diff = abs(matrix[i][j] - matrix[k][l]);
                        if(diff > maxDiff)
                            maxDiff = diff;
                    }
                }
            }
        }
    }

    printf("%d", maxDiff);
    return 0;
}
