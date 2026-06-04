//Write a program to Reverse a number.
#include <stdio.h>
int reverse_number(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = reverse_number(number);
    printf("The reverse of %d is: %d\n", number, result);
    
    return 0;
}
