#include <stdio.h>

// Function to reverse an integer using recursion
int reverse(int num) {
    static int reversedNum = 0; // Static variable to store the reversed number

    // Base case: when num becomes 0, return the reversed number
    if (num == 0)
        return reversedNum;

    // Recursive call
    reversedNum = reversedNum * 10 + num % 10;
    return reverse(num / 10);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int reversed = reverse(num);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
