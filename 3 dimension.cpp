#include <stdio.h>

int main() {
    // Declare and initialize a 3D array (2 layers, 3 rows, 3 columns)
    int i,j,k;
	int arr[2][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        }
    };

    // Access and print the elements of the 3D array
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                printf("Element at arr[%d][%d][%d]: %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

    return 0;
}

