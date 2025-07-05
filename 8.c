// Write a program to find sum of 100 to 150

#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 100; i <= 150; i++)
    {
        sum += i;
    }

    printf("The sum of numbers from 100 to 150 is: %d\n", sum);

    return 0;
}
