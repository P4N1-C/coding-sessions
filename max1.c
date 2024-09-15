// Problem 4: Max 1s in a Row
// Given a binary matrix (consisting of only 0s and 1s), find the row index with the maximum number of 1s.
// Input:
// First line: Two integers n and m, the dimensions of the matrix.
// Next n lines: Each containing m binary integers (0 or 1).
// Output:
// Print the index of the row that contains the maximum number of 1s. If multiple rows have the same number of 1s, return the first one.

#include <stdio.h>

int main() {
    int n = 4, m = 5;  

    int matrix[4][5] = {
        {0, 1, 1, 1, 0},
        {1, 1, 0, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 0, 0, 0}
    };

    int maxRowIndex = -1;  // To store the index of the row with maximum 1's
    int maxOnes = 0;       // To store the maximum number of 1's found in a row

    // Iterate through each row
    for (int i = 0; i < n; i++) {
        int onesCount = 0;

        // Count the number of 1's in the current row
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 1) {
                onesCount++;
            }
        }

        // Update the row index with maximum number of 1's
        if (onesCount > maxOnes) {
            maxOnes = onesCount;
            maxRowIndex = i;
        }
    }

    // Output the result
    if (maxRowIndex != -1)
        printf("Row with the maximum number of 1's is: %d\n", maxRowIndex);
    else
        printf("No 1's found in the matrix.\n");

    return 0;
}
