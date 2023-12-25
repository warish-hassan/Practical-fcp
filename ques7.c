//Write a program to write data into a file.
#include<stdio.h>
#include<string.h>
int main()
{
    char data[200], fname[30];
    FILE *fp;
    printf("Enter a File Name to Open/Create: ");
    gets(fname);
    fp = fopen(fname, "w");
    if(fp==NULL)
        printf("Error Occurred while Opening/Creating the File!");
    else
    {
        printf("\nEnter the Data: ");
        gets(data);
        while(strlen(data)>0)
        {
            fputs(data, fp);
            fputs("\n", fp);
            gets(data);
        }
    }
    fclose(fp);
    getch();
    return 0;
}

//Write a program to read data from a file.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Driver code
int main()
{
    FILE* ptr;
    char ch;
    ptr = fopen("aakash.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("content of this file are \n");
 
    while (!feof(ptr)) {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
    fclose(ptr);
    return 0;
}