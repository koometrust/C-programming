#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    long long number;  // To store the input number
    int digit;         // To store the digit to check
    int count = 0;     // To store the count of occurrences

    printf("Enter a list of numbers: ");
    scanf("%lld", &number);

    printf("Enter the digit you want to count: ");
    scanf("%d", &digit);

    // Check each digit in the number


    while (number > 0) {
        int currentDigit = number % 10;
        if (currentDigit == digit) {
            count++;
        }
        number /= 10;
    }

    printf("%d occurred %d times in the list of numbers.\n", digit, count);

    return 0;
}