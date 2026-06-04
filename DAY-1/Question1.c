//Write a program to calculate sum of first n natural numbers.
#include <stdio.h>
int sum_of_natural_numbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    
    int result = sum_of_natural_numbers(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, result);
    
    return 0;
}
