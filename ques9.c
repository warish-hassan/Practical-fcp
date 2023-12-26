#include <stdio.h>
#include <string.h>

// Structure to represent student data
struct Student {
    char name[50];
    int rollNo;
    char gender;
};

int main() {
    
    struct Student studentData;
    strcpy(studentData.name, "John Doe");
    studentData.rollNo = 12345;
    studentData.gender = 'M';

    
    FILE *file = fopen("student_data.txt", "w");

    if (file != NULL) {
        
        fprintf(file, "One line about myself: Hello, I am a C programmer.\n");

        
        fprintf(file, "\nStudent Data:\n");
        fprintf(file, "Name: %s\n", studentData.name);
        fprintf(file, "Roll No: %d\n", studentData.rollNo);
        fprintf(file, "Gender: %c\n", studentData.gender);

        
        fclose(file);

        printf("File created successfully with student data.\n");
    } else {
        printf("Error opening the file.\n");
    }

    return 0;
}