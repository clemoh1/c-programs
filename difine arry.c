#include <stdio.h>

int main() {
    int i, j;
    
    // Declare and initialize a 2D array named "scores" with 2 rows and 2 columns
    int scores[2][2] = {
        {65, 92},
        {35, 70}
    };

    // Print the elements of the array using a nested for loop
    printf("Elements of the scores array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}

