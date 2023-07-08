#include <stdio.h>

// Function to solve the Tower of Hanoi problem using recursion
void towerOfHanoi(int numDisks, char source, char auxiliary, char destination) {
   if(numDisks>0){
    towerOfHanoi(numDisks - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", numDisks, source, destination);
    towerOfHanoi(numDisks - 1, auxiliary, source, destination);
   }
}

int main() {
    int numDisks;

    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);

    printf("Steps to solve the Tower of Hanoi problem with %d disks:\n", numDisks);
    towerOfHanoi(numDisks, 'A', 'B', 'C');

    return 0;
}
