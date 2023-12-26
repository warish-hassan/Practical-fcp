#include <stdio.h>
#include <string.h>


int main() {char str3[] = "Hello";
    char str4[] = "World";
    char concatStr2[20];
    int i, j;
    for (i = 0; str3[i] != '\0'; ++i) {
        concatStr2[i] = str3[i];
    }
    for (j = 0; str4[j] != '\0'; ++j) {
        concatStr2[i + j] = str4[j];
    }
    concatStr2[i + j] = '\0';
    printf("String concatenation using character array: %s\n", concatStr2);
    return 0;
}