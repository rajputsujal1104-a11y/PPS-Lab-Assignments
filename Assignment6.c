#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int recursive(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * recursive(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0 || n > 12)
    {
        printf("Invalid input");
    }
    else
    {
        printf("Factorial without recursion = %d\n", factorial(n));
        printf("Factorial with recursion = %d", recursive(n));
    }

    return 0;
}