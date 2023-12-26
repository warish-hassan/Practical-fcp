#include <stdio.h>
#include <string.h>


int main() {
    // Scenario 1: Using string library

    // String comparison
    char str1[] = "Hello";
    char str2[] = "World";
    char concatStr[20];
    strcpy(concatStr, str1);
    strcat(concatStr, str2);
    printf("String concatenation using library: %s\n", concatStr);
    return 0;
}