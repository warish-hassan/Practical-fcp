#include <stdio.h>

// Function to calculate checksum of a file
int calculateChecksum(FILE *file) {
    fseek(file, 0, SEEK_SET);
    int checksum = 0;
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        checksum += ch;
    }
    return checksum;
}

int main() {
    
    FILE *file = fopen("student_data.txt", "a+");

    if (file != NULL) {
        
        printf("Existing File Data:\n");
        fseek(file, 0, SEEK_SET);
        int ch;
        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }

        
        int checksum = calculateChecksum(file);
        fprintf(file, "\nChecksum: %d", checksum);

       
        fclose(file);

        printf("\nFile data appended with checksum successfully.\n");
    } else {
        printf("Error opening the file.\n");
    }

    return 0;
}
