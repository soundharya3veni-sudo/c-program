
    #include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int salary[R][C];
    
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &salary[i][j]);
        }
    }

    int minIndex = 0;
    float minAvg = 0;

    for(int i = 0; i < R; i++) {
        int sum = 0;
        for(int j = 0; j < C; j++) {
            sum += salary[i][j];
        }

        float avg = (float)sum / C;

        if(i == 0 || avg < minAvg) {
            minAvg = avg;
            minIndex = i;
        }
    }

    printf("%d", minIndex);

    return 0;
}
    return 0;
}
