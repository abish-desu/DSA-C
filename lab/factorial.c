// Write a program to calculate factorial number using recursion

#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    int fact;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    fact = factorial(num);
    printf("Factorial of %d = %d\n", num, fact);

    return 0;
}