#include <stdio.h>

int main() {
    int n, i;
    // unsigned long long can store values up to 20!
    unsigned long long fact = 1; 

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Error handling for negative integers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop to calculate factorial
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
