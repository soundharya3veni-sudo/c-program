#include <stdio.h>

int reverseNumber(int n) {
    int rev = 0;

    while (n != 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    return rev;
}

int isPalindrome(int n) {
    if (n == reverseNumber(n))
        return 1;
    else
        return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
