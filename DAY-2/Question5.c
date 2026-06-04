//Write a program to Find sum of digits of a number.
#include <stdio.h>
int sum_of_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = sum_of_digits(number);
    printf("The sum of digits of %d is: %d\n", number, result);
    
    return 0;
}