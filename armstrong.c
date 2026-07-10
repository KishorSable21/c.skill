#include <math.h>
#include <stdio.h>
#include <stdbool.h> 

// Recursive function to calculate the sum of digits raised
// to the power of num_digits
int armstrongSum(int N, int K)
{
    if (N == 0) {
        return 0;
    }
    int digit = N % 10;
    return pow(digit, K) + armstrongSum(N / 10, K);
}

// Function to check if the number is an Armstrong number
bool isArmstrong(int N) {
  
  	// Finding the number of digits
    int K = log10(N) + 1;
  
    // Calculating the sum
    int sum = armstrongSum(N, K);
  
  	// Returning whether the sum is equal to the original
  	// number or not
    return (sum == N);
}

int main() {
    int N = 153;

    // Check if the number is an Armstrong number
    if (isArmstrong(N)) {
        printf("Yes, %d is an Armstrong Number\n", N);
    }
    else {
        printf("No, %d is not an Armstrong Number\n", N);
    }

    return 0;
}
