#include <stdio.h>
#include <string.h>


int main() {
    // Scenario 1: Using string library

    // String comparison
    char str1[] = "Hello";
    char str2[] = "World";
    // String reversal
    char reverseStr[20];
    strcpy(reverseStr, str1);
    strrev(reverseStr);
    printf("String reversal using library: %s\n", reverseStr);
    return 0;}