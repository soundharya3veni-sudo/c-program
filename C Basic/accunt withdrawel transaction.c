#include <stdio.h>
int main() {
    int accountType;
    int balance, withdrawAmount;
    scanf("%d", &accountType);
    scanf("%d", &balance);
    scanf("%d", &withdrawAmount);

    switch(accountType) {
        case 1:   // Savings Account
            if (balance >= withdrawAmount) {
                printf("Transaction Successfull");
            } else {
                printf("Insufficient Balance");
            }
            break;

        case 2:   // Current Account
            if (withdrawAmount <= 5000) {
                printf("Transaction Successfull");
            } else {
                printf("Limit Exceeded");
            }
            break;

        default:
            printf("Invalid Account Type");
    }

    return 0;
}

    return 0;
}
