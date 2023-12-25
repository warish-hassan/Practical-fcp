//Write a program to illustrate the  basic pointer arithmetic operations.
#include <stdio.h>

int main()
{
    int a = 22;
    int *p = &a;
    printf("p = %u\n", p); 
    p++;
    printf("p++ = %u\n", p);   
    p--;
    printf("p-- = %u\n", p);
    return 0;
    }