#include <stdio.h>

int main() {
    int mode;
    char category;

    scanf("%d", &mode);
    scanf(" %c", &category);

    switch (mode) {
        case 1:   // Online
            if (category == 'R')
                printf("₹5000");
            else if (category == 'S')
                printf("₹3000");
            break;

        case 2:   // Offline
            if (category == 'R')
                printf("₹9000");
            else if (category == 'S')
                printf("₹7000");
            break;

        default:
            printf("Invalid Input");
    }

    return 0;
}
