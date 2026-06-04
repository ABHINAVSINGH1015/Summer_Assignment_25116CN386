//Write a program to Print multiplication table of a given number. 
#include <stdio.h>
int table_of_number(int n) {
    printf("Multiplication table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    
    table_of_number(n);
    
    return 0;
}
