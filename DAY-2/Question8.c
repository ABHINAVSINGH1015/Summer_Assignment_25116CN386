//Write a program to Check whether a number is palindrome or not.
#include <stdio.h>
int palindrome(int n) {
    int original = n;
    int reversed = 0;
    
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    
    return original == reversed;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (palindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }
    
    return 0;
}
