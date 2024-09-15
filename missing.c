// Problem 5: Find Missing Number
// Given an array of size n that contains numbers from 1 to n+1 with one missing, find the missing number.
// Input:
// First line: An integer n, the size of the array.
// Second line: n integers, representing the array elements.
// Output:
// Print the missing number.


#include <stdio.h>

int main() {
    // Predefined array with a missing number from 1 to (n + 1)
    int arr[] = {1, 2, 4, 5, 6};  // Example array with one number missing
    int n = sizeof(arr) / sizeof(arr[0]);  // Number of elements in the array

    // Calculate the expected sum of numbers from 1 to (n + 1)
    int totalSum = (n + 1) * (n + 2) / 2;

    // Calculate the sum of elements in the array
    int arrSum = 0;
    for (int i = 0; i < n; i++) {
        arrSum += arr[i];
    }

    // The missing number is the difference between the total sum and the array sum
    int missingNumber = totalSum - arrSum;

    // Output the result
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}
