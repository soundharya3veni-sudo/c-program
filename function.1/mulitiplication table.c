#include <stdio.h>

// Function to print multiplication table
void printTable(int n)
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    printTable(N);

    return 0;
}
