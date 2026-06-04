//Write a program to Find product of digits.
#include <stdio.h>
int product_of_digits(int n) {
    int product = 1;
    while (n != 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = product_of_digits(number);
    printf("The product of digits of %d is: %d\n", number, result);
    
    return 0;
}
