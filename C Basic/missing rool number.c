
 #include <stdio.h>
int main() {
    int N, num, sum = 0;

    // Read N
    scanf("%d", &N);

    // Calculate expected sum
    int expected_sum = N * (N + 1) / 2;

    // Read N-1 roll numbers
    for(int i = 0; i < N - 1; i++) {
        scanf("%d", &num);
        sum += num;
    }

    // Missing roll number
    int missing = expected_sum - sum;

    printf("%d", missing);

    return 0;
}
    
