#include <stdio.h>

/* Data variables */
int columns, rows;

int main() {

    /* Getting data */ 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    /* Creating the matrix(grid) */
    int square[rows][columns];

    /* Executing the algorithm described in solution */
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (j == 0 || i == 0) {
                square[i][j] = 1;
            } else {
                square[i][j] = square[i - 1][j] + square[i][j - 1];
            }
        }
    }

    /* Printing the result */
    printf("The different paths are: %d", square[--rows][--columns]);
    return 0;
}