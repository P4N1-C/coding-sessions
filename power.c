// Problem 3: Check if a Number is Power of 2
// Write a program to check if a given integer x is a power of 2 using bitwise operations.
// Input:
// A single integer x.
// Output:
// Output "Yes" if x is a power of 2, otherwise "No".


#include <stdio.h>

int main() {
    int num;
    
    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is a power of two
    if (num > 0 && (num & (num - 1)) == 0)
        printf("%d is a power of two.\n", num);
    else
        printf("%d is not a power of two.\n", num);
    
    return 0;
}

// these are the newest tests that i have made now
