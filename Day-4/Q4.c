#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, rem, digits;
    int sum;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    for (num = start; num <= end; num++) {
        temp = num;
        digits = 0;

        // Count digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        sum = 0;

        // Calculate Armstrong sum
        while (temp != 0) {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}