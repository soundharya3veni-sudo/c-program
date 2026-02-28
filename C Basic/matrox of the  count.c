#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    int count = 0;

    // Input matrix
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check each row
    for(int i = 0; i < R; i++) {
        int sorted = 1;  // assume sorted

        for(int j = 0; j < C - 1; j++) {
            if(matrix[i][j] > matrix[i][j+1]) {
                sorted = 0;
                break;
            }
        }

        if(sorted == 1) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
