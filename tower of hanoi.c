#include <stdio.h>

void towers(int num, char frompeg, char topeg, char auxpeg);

int main() {
    int num;
    printf("Enter the number of disks: ");
    scanf("%d", &num);

    printf("The sequence of moves involved in the Tower of Hanoi are:\n");
    towers(num, 'A', 'C', 'B');  // Note: Use uppercase letters consistently

    return 0;
}

void towers(int num, char frompeg, char topeg, char auxpeg) {
    if (num == 1) {
        printf("\nMove disk 1 from peg %c to peg %c", frompeg, topeg);
        return;
    }

    // Move top n-1 disks from source to auxiliary peg
    towers(num - 1, frompeg, auxpeg, topeg);

    // Move the remaining disk from source to destination peg
    printf("\nMove disk %d from peg %c to peg %c", num, frompeg, topeg);

    // Move the n-1 disks from auxiliary to destination peg
    towers(num - 1, auxpeg, topeg, frompeg);
}
