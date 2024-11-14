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

int main() {  
    writeToFile(); // Call the function  
    return 0;  
}
