// Write a program to find sum of x to y (both inclusive)

#include <stdio.h>

int main()
{
    int x, y, sum = 0;

    printf("Enter the starting number (x): ");
    scanf("%d", &x);

    printf("Enter the ending number (y): ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("Invalid input: x should be less than or equal to y.\n");
        return 1;
    }

    for (int i = x; i <= y; i++)
    {
        sum += i;
    }

    printf("The sum from %d to %d is: %d\n", x, y, sum);

    return 0;
}
