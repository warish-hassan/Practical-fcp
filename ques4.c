#include <stdio.h>
#include <string.h>


int main() {
    // Scenario 1: Using string library

    // String comparison
    char str1[] = "Hello";
    char str2[] = "World";
    if (strlen(str1) == strlen(str2)) {
        printf("Length comparison using library: Equal\n");
    } else {
        printf("Length comparison using library: Not Equal\n");
    }
    return 0;
}