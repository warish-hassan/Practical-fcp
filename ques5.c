#include <stdio.h>
#include <string.h>


int main() {char str3[] = "Hello";
    char str4[] = "World";
    if (strcmp(str3, str4) == 0) {
        printf("String comparison using character array: Equal\n");
    } else {
        printf("String comparison using character array: Not Equal\n");
    }
    return 0;
}