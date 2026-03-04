#include <stdio.h>
int main() {
def reverse_number(n):
    reverse = 0
    while n > 0:
        digit = n % 10
        reverse = reverse * 10 + digit
        n = n // 10
    return reverse

# Input
n = int(input())

# Output
print(reverse_number(n))
}
