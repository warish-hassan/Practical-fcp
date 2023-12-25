//Write a program to check if a string is apalindrome or not.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] ;
    printf("enter your string\n");
    gets(str);
	
	int i= 0;
	int j = strlen(str) - 1;

	while (j > i) {
		if (str[i++] != str[j--]) {
			printf("%s is not a palindrome\n", str);
			return 0;
		}
	}

	printf("%s is a palindrome\n", str);

	return 0;
}




//Write a program to calculate the length of a string using a library functions / predefined operators.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] ;
    printf("enter your string\n");
    gets(str);
	
	int string_length= strlen(str) ;

	printf(" The length of the string is %d\n", string_length);

	return 0;
}


//Write a program to concatenate two strings using library functions.

#include <stdio.h>
#include <string.h>

int main()
{
char s1[100] ;
    printf("enter your string\n");
    gets(s1);
    char s2[100] ;
    printf("enter your string\n");
    gets(s2);

	
	strcat(s1, s2);
	printf("Final string is: %s ", s1);
	return 0;
}
