//Write a program to Count digits in a number.
#include <stdio.h>
int count_digits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    
    int result = count_digits(n);
    printf("The number of digits in %d is: %d\n", n, result);
    
    return 0;
}