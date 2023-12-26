#include <stdio.h>
#include <string.h>

int main() {
    // Scenario 1: Using string library

    // String comparison
    char str1[] = "Hello";
    char str2[] = "World";
    if (strcmp(str1, str2) == 0) {
        printf("String comparison using library: Equal\n");
    } else {
        printf("String comparison using library: Not Equal\n");
    }
    return 0;
}