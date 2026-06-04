//Write a program to Print prime numbers in a range.
#include <stdio.h>
int primeinrange(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int lower, upper;
    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    printf("Prime numbers between %d and %d are: ", lower, upper);
    for (int i = lower; i <= upper; i++)
    {
        if (primeinrange(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}