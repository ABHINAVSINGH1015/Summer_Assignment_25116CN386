//Write a program to Find nth Fibonacci term.
#include <stdio.h>
int nthFibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return nthFibonacci(n - 1) + nthFibonacci(n - 2);
}
int main()
{
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);
    printf("The %dth Fibonacci term is: %d\n", n, nthFibonacci(n));
    return 0;
}
