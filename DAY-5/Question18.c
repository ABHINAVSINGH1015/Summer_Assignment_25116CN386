//Write a program to Check strong number.
#include <stdio.h>
int strong_number(int num)
{
    int sum = 0, temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++)
        {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }
    return sum == num;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (strong_number(num))
    {
        printf("%d is a strong number.\n", num);
    }
    else
    {
        printf("%d is not a strong number.\n", num);
    }
    return 0;
}