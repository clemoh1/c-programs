#include <stdio.h>

int main() {
    int i = 1, n;

    // Prompt user for input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // While loop to calculate and print the cube of each number
    while (i <= n) {
        printf("Number is : %d and cube of %d is : %d\n", i, i, i * i * i);
        i++;
    }

    return 0;
}
