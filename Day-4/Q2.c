//WAP TO FIND Nth Fibonacci term
#include <stdio.h>
int main() {
    int n, i;
    long long f1= 0, f2 = 1, f3;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Fibonacci term at position 0 = 0\n");
    } else if (n == 1) {
        printf("Fibonacci term at position 1 = 1\n");
    } else {
        for (i = 2; i <= n; i++) {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
        printf("Fibonacci term at position %d = %lld\n", n, f2);
    }

    return 0;
}