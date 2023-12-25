//Compute nCr using Functions: Write a function to calculate nCr, where n and r are given by the user.

#include <stdio.h>

int factorial(int n) {
	if(n == 0)
	return 1;
	int factorial = 1;
	for (int i = 2; i <= n; i++)
		factorial = factorial * i;
	return factorial;
}

int nCr(int n, int r) {
	return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
	int n , r ;
	 printf("Enter first number n: ");
     scanf("%d", &n);
     printf("Enter second number r: ");
     scanf("%d", &r);
	printf("%d", nCr(n, r));
	return 0;
}
