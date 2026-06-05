//Write a program to Check perfect number.
#include <stdio.h>
int perfect_number(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return sum == num;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (perfect_number(num))
    {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}
