/* NOT YET READY */



/*
*   The inputs for the problem are:
* 
*   gold.jpg : 5 and 0.1.6.3.5.1.15.3.8.2.1.2.2.6.4
*
*   goldlarge.jpg : 9 and 0.1.6.3.5.1.15.3.8.2.1.2.1.6.4.4.1.2.6.3.7.10.8.17.2.7.8.4.7.2.10.7.8.4.2.6.14.4.6.8.4.7.6.7.10
*/
#include <stdio.h>
#include <string.h>

/* Data variables */
int height;

int main() {

    /* Getting height */
    printf("What is the height of the pyramid: ");
    scanf("%d", &height);

    /* Getting the pyramid sequence in a matrix */
    int pyramid[height][height];
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("Number at row %d and column %d: ", (i + 1), (j + 1));
            scanf("%d", &pyramid[i][j]);
        }
    }

    /* Executing the algorithm described by solution */
    for (int i = 1; i < height; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0) { /* Left most column */ 
                pyramid[i][j] += pyramid[i - 1][j];
            } 
            else if (j == i) { /* Right most column */
                pyramid[i][j] += pyramid[i - 1][j - 1];
            }
            else {
                if (pyramid[i - 1][j - 1] < pyramid[i - 1][j]) {
                    pyramid[i][j] += pyramid[i - 1][j];
                }
                else {
                    pyramid[i][j] += pyramid[i - 1][j - 1];
                }
            }
        }
    }

    /* Finding highest value point */
    int best = 0;
    int col = 0;
    for (int i = 0; i < height; ++i) {
        if (best < pyramid[height - 1][i]) {
            best = pyramid[height - 1][i];
            col = i;
        }
    }
    printf("best: %d at %d", best, col);
    /* Preparing answer */
    /*har answer[] = "| with value: ";
    strcat(answer, char(best));
    printf("%s", answer);*/
    return 0;
}
/*
# Preparing answer
answer = "| with value: " + str(best)
for i in range(height - 1, 0, -1):
    if col == 0:
        answer = "Left " + answer
    elif col == i:
        answer = "Right " + answer
        col -= 1
    else:
        if pyramid[i - 1][col - 1] < pyramid[i - 1][col]:
            answer = "Left " + answer
        else:
            answer = "Right " + answer
            col -= 1

# Printing the result
print("\nThe best path is: |", answer)*/
