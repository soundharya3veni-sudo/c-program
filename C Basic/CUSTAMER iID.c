#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input customer IDs
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print unique IDs
    for(int i = 0; i < n; i++) {
        int isDuplicate = 0;

        // Check if current element appeared before
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if(isDuplicate == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
