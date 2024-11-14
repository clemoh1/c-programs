#include <stdio.h>  
#include <stdlib.h>  

#define MAX_LEN 201  // Maximum length for the paragraph (200 + 1 for null terminator)  

void writeToFile() {  
    FILE *file;  
    char paragraph[MAX_LEN];  

    printf("Enter a paragraph (up to 200 characters): ");  
    fgets(paragraph, MAX_LEN, stdin); // Read input from user  

    file = fopen("C:\\Users\\clemoh\\OneDrive\\Desktop\\cfiles\\output.txt", "w"); // Open file for writing  
    if (file == NULL) {  
        perror("Error opening file for writing");  
        return;  
    }  

    fprintf(file, "%s", paragraph); // Write paragraph to file  
    fclose(file); // Close the file  
}  

void readFromFile() {  
    FILE *file;  
    char ch;  

    file = fopen("output.txt", "r"); // Open file for reading  
    if (file == NULL) {  
        perror("Error opening file for reading");  
        return;  
    }  

    printf("Content of output.txt:\n");  
    while ((ch = fgetc(file)) != EOF) {  
        putchar(ch); // Display each character  
    }  

    fclose(file); // Close the file  
}  

void appendToFile() {  
    FILE *file;  
    char additionalParagraph[MAX_LEN];  

    printf("Enter an additional paragraph (up to 200 characters): ");  
    fgets(additionalParagraph, MAX_LEN, stdin); // Read additional input from user  

    file = fopen("output.txt", "a"); // Open file for appending  
    if (file == NULL) {  
        perror("Error opening file for appending");  
        return;  
    }  

    fprintf(file, "%s", additionalParagraph); // Append paragraph to file  
    fclose(file); // Close the file  
}  

int main() {  
    writeToFile();      // Function to write  
    readFromFile();     // Function to read  
    appendToFile();     // Function to append  
    readFromFile();     // Read again to show appended content  

    return 0;  
}
