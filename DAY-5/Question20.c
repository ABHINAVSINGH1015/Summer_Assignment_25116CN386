//Write a program to Find largest prime factor.
#include <stdio.h>
int largest_prime_factor(int num)
{
    int largest_factor = -1;
    for (int i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            largest_factor = i;
            num /= i;
        }
    }
    return largest_factor;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = largest_prime_factor(num);
    if (result != -1)
    {
        printf("The largest prime factor of %d is %d.\n", num, result);
    }
    else
    {
        printf("%d has no prime factors.\n", num);
    }
    return 0;
}
