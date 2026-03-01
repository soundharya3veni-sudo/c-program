 #include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    int count = 0;

    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            scanf("%d", &matrix[i][j]);

    for(int i = 0; i < R; i++) {
        int unique = 1;
        for(int j = 0; j < C; j++) {
            for(int k = j + 1; k < C; k++) {
                if(matrix[i][j] == matrix[i][k]) {
                    unique = 0;
                    break;
                }
            }
            if(!unique) break;
        }
        if(unique) count++;
    }

    printf("%d", count);
    return 0;
}
