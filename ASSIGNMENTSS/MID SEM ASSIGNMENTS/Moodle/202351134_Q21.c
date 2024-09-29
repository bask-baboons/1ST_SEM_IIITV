// Program to understand and solve Tower of Hanoi Problem using Recursion
//Author: Sivajeet Sabdakar
// Date: 12-10-2023

#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination, int* stepCount) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        (*stepCount)++;
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary, stepCount);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    (*stepCount)++;
    towerOfHanoi(n - 1, auxiliary, source, destination, stepCount);
}

int main() {
    int n = 2; // Number of disks
    int stepCount = 0; // Initialize the step count to 0
    towerOfHanoi(n, 'A', 'B', 'C', &stepCount);
    printf("Number of steps taken: %d\n", stepCount);
    return 0;
}


/*Output:
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C
*/