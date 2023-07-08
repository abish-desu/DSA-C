#include <stdio.h>

// Function to print Fibonacci series using recursion
void fibonacci(int n, int a, int b) {
    if (n > 0) {
        printf("%d ", a);
        fibonacci(n - 1, b, a + b);
    }
}

int main() {
    int num;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci series up to %d terms: ", num);
    fibonacci(num, 0, 1);

    return 0;
}
