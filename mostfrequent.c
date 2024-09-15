// Problem 6: Find the Most Frequent Element
// Given an array of integers, find the most frequent element. If there is a tie for the most frequent element, return the smallest one.
// Input:
// First line: An integer n, the size of the array.
// Second line: n integers, representing the array elements.
// Output:
// Print the most frequent element in the array.


#include <stdio.h>

int main() {
    // Predefined array
    int arr[] = {4, 1, 2, 2, 3, 4, 4, 5, 4};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Number of elements in the array

    // Variables to keep track of the most frequent element
    int mostFrequent = arr[0];
    int maxCount = 0;

    // Loop to find the most frequent element
    for (int i = 0; i < n; i++) {
        int count = 0;

        // Count occurrences of arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        // Update the most frequent element if count is greater
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    // Output the result
    printf("The most frequent element is: %d\n", mostFrequent);

    return 0;
}
