//Write a program to Find factorial of a number.
#include <stdio.h>
int factorial_of_number(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    
    int result = factorial_of_number(n);
    printf("The factorial of %d is: %d\n", n, result);
    
    return 0;
}
