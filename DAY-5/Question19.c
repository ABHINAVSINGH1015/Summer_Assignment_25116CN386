//Write a program to Print factors of a number. 
#include <stdio.h>
void print_factors(int num)
{
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    print_factors(num);
    return 0;
}
