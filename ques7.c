#include <stdio.h>
#include <string.h>


int main() {char str3[] = "Hello";
    char str4[] = "World";
     // String reversal
    char reverseStr2[20];
    strcpy(reverseStr2, str3);
    int len = strlen(reverseStr2);
    for (int i = 0; i < len / 2; ++i) {
        char temp = reverseStr2[i];
        reverseStr2[i] = reverseStr2[len - i - 1];
        reverseStr2[len - i - 1] = temp;
    }
    printf("String reversal using character array: %s\n", reverseStr2);
    return 0;
}