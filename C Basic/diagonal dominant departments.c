#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    int count = 0;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < R; i++) {
        int rowSum = 0;
        for(int j = 0; j < C; j++) {
            rowSum += matrix[i][j];
        }

        if(matrix[i][i] > (rowSum - matrix[i][i])) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
