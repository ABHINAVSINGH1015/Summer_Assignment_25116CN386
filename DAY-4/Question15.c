//Write a program to Check Armstrong number.
#include <stdio.h>
int isArmstrong(int num)
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
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
