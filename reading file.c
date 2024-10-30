#include <stdio.h>
#include <stdlib.h>

void readFromFile() {
    FILE *fptr;
    char sentence[100];

    // Open the file in read mode
    fptr = fopen("C:\\Users\\clemoh\\OneDrive\\Desktop\\cfiles\\data.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    // Display file content
    printf("Content of data.txt:\n");
    while (fgets(sentence, sizeof(sentence), fptr) != NULL) {
        printf("%s", sentence);
    }
    fclose(fptr);
}

int main() {
    readFromFile();
    return 0;
}

