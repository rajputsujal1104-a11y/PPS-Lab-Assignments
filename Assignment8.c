
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\nBefore Swapping:");
    printf("\nFirst number = %d, Second number = %d", a, b);

    swap(&a, &b);

    printf("\n\nAfter Swapping:");
    printf("\nFirst number = %d, Second number = %d", a, b);

    return 0;
}
