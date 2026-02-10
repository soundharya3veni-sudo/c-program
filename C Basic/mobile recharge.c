#include <stdio.h>
int main() {
    int planType, paymentMode;
    int cost, cashback = 0;

    scanf("%d", &planType);
    scanf("%d", &paymentMode);

    switch (planType) {
        case 1:
            cost = 199;
            break;
        case 2:
            cost = 399;
            break;
        default:
            printf("Invalid plan");
            return 0;
    }

    switch (paymentMode) {
        case 11:   // UPI
        case 12:   // Card
            cashback = 20;
            break;
        case 13:   // Wallet
            cashback = 0;
            break;
        default:
            printf("Invalid payment mode");
            return 0;
    }

