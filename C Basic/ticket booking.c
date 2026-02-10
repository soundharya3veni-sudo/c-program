#include <stdio.h>

int main() {
    int classType, age;
    float fare;

    scanf("%d", &classType);
    scanf("%d", &age);

    switch (classType) {
        case 1:   // Sleeper
            fare = 300;
            if (age < 12) {
                fare = fare * 0.5;      // 50% discount
            } else if (age >= 60) {
                fare = fare * 0.67;     // 33% discount
            }
            break;

        case 2:   // AC
            fare = 1000;
            if (age < 12) {
                fare = fare * 0.5;      // 50% discount
            }
            break;

        default:
            printf("Invalid class");
            return 0;
    }

    printf("Fare ₹%.0f", fare);
    return 0;
}
