#include <stdio.h>

/* Data variables */
int stairs, temp;

int main() {

    /* Getting data */ 
    printf("Enter the number of stairs:");
    scanf("%d", &stairs);

    int a = 0;
    int b = 1;

    /* Calculating N + 2 number of the fibonacci sequence */
    for (int i = 0; i < stairs; ++i) {
        temp = a + b;
        a = b;
        b = temp;
    }

    /* Printing the result */
    printf("Answer: %d ways", b);
    return 0;
}