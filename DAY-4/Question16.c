//Write a program to Print Armstrong numbers in a given range.
#include <stdio.h>
int Armstrong_in_range(int num)
{
    int originalNum, remainder, result = 0;
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    return result == num;
}
int main()
{
    int lower, upper, i;
    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    for (i = lower; i <= upper; i++)
    {
        if (Armstrong_in_range(i))
            printf("%d ", i);
    }
    return 0;
}
